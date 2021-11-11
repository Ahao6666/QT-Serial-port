/*------------------------------------
 *          user
 *------------------------------------*/

#include <include.h>
#include <QDebug>
#include <QComboBox>
#include <QHeaderView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QDesktopServices>
#include <QUrl>
#include <QFileDialog>
#include <QAxObject>
#include <QDateTime>
#include <QtCharts>
#include <QChartView>
#include <QSplineSeries>

Serial::Serial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Serial)
{
    ui->setupUi(this);
    //用户添加
    Serial::setWindowTitle(tr("Serial port test"));
    Timer0_Init();
    Timer1_Init();
    systemInit();
    table_init();
    table_tab3_init();
//    chart_init();
}
/*----------------------------------------------------------
 *          表格初始化显示
 *----------------------------------------------------------*/
void Serial::table_init(){
    ui->qTableWidget->setColumnCount(9);        //设置列数
    ui->qTableWidget->setRowCount(1);          //设置行数
    ui->qTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->qTableWidget->setWindowTitle("QTableWidget");
    QStringList m_Header;
    m_Header<<QString("Time")<<QString("ADC0")<<QString("ADC1")<<QString("ADC2")<<QString("ADC3")<<QString("ADC4")<<QString("ADC5")<<QString("PWM")<<QString("motor speed(r/s)");
    ui->qTableWidget->setHorizontalHeaderLabels(m_Header);              //添加横向表头
    ui->qTableWidget->verticalHeader()->setVisible(false);               //纵向表头不可视化
    ui->qTableWidget->horizontalHeader()->setVisible(true);             //横向表头可视化
    ui->qTableWidget->setShowGrid(true);                               //隐藏栅格
    ui->qTableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);      //设置表格选择方式：设置表格为单元选中
    ui->qTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);         //选择目标方式
    ui->qTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);          //设置水平滚动条
    ui->qTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);            //设置垂直滚动条
    ui->qTableWidget->setStyleSheet("selection-background-color:pink");             //设置选中颜色：粉色
}
/*----------------------------------------------------------
 *          表格初始化显示tab3 table init
 *----------------------------------------------------------*/
void Serial::table_tab3_init(){
    ui->table_convert->setColumnCount(9);        //设置列数
    ui->table_convert->setRowCount(1);          //设置行数
    ui->table_convert->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->table_convert->setWindowTitle("table_convert");
    QStringList m_Header;
    m_Header<<QString("Time")<<QString("Fx(N)")<<QString("Fy(N)")<<QString("Fz(N)")<<QString("Mx(Nm)")<<QString("My(Nm)")<<QString("Mz(Nm)")<<QString("PWM")<<QString("motor speed(r/s)");
    ui->table_convert->setHorizontalHeaderLabels(m_Header);              //添加横向表头
    ui->table_convert->verticalHeader()->setVisible(false);               //纵向表头不可视化
    ui->table_convert->horizontalHeader()->setVisible(true);             //横向表头可视化
    ui->table_convert->setShowGrid(true);                               //隐藏栅格
    ui->table_convert->setSelectionBehavior(QAbstractItemView::SelectRows);      //设置表格选择方式：设置表格为行选中
    ui->table_convert->setSelectionMode(QAbstractItemView::SingleSelection);         //选择目标方式
    ui->table_convert->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);          //设置水平滚动条
    ui->table_convert->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);            //设置垂直滚动条
    ui->table_convert->setStyleSheet("selection-background-color:pink");             //设置选中颜色：粉色
}
/*----------------------------------------------------------
 *          折线图初始化显示
 *----------------------------------------------------------*/
QChart *mChart;    //创建图表对象
QLineSeries *lineSeries_0 = new QLineSeries();        //创建折线系列
/*
void Serial::chart_init(){
    mChart = new QChart();                          //创建图标对象

    QChartView *chartView = new QChartView();

    mChart->addSeries(lineSeries_0);                  //向图表中添加系列

    lineSeries_0->setPen(QPen(Qt::black,2,Qt::SolidLine));
    lineSeries_0->setName(QStringLiteral("Fx"));

    mChart->createDefaultAxes();                       //创建默认的坐标，必须在addSeries之后调用
    mChart->setTheme(QChart::ChartThemeDark);           //设置图标主题
    mChart->setTitle(QStringLiteral("力/力矩传感器数据采集"));        //设置图标名称
    mChart->legend()->show();                          //显示图例
    chartView->setChart(mChart);                        //向chartView中添加图标
    chartView->resize(QSize(500,300));                  //重新设置chartView的大小
    chartView->setRenderHints(QPainter::Antialiasing);//消除边缘，看起来平滑一些
    ui->horizontalLayout_chart->addWidget(chartView);     //把chartView放到水平布局中（在ui中拖一个水平布局）
}
*/
Serial::~Serial()
{
    delete ui;
}
/*----------------------------------------------------------
 *          function
 *----------------------------------------------------------*/
void Serial::systemInit()
{
    globlePort.setParity(QSerialPort::NoParity);
    globlePort.setDataBits(QSerialPort::Data8);
    globlePort.setStopBits(QSerialPort::OneStop);
    //端口设定
    ui->baudRateBox->setCurrentIndex(4);        //波特率9600
    //信号绑定到槽
    connect(ui->openButton,&QPushButton::clicked,this,&Serial::ButtonOpenPort);//打开串口信号
    connect(ui->sendTxtButton,&QPushButton::clicked,this,&Serial::ButtonSendPort);//发送文本信号
    connect(ui->pushButton_3,&QPushButton::clicked,this,&Serial::ButtonStopShow);//暂停显示文本信号
    connect(&globlePort,&QSerialPort::readyRead,this,&Serial::ReciveDate);//串口打开就接收消息
    connect(ui->pushButton_2,&QPushButton::clicked,this,&Serial::ButtonClear);//清空文本框信号
    connect(ui->checkBox,&QCheckBox::stateChanged,this,&Serial::AutoClear);//自动清除

    connect(&globlePort, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error),  this, &Serial::handleSerialError);
    //connect(ui->checkBox_2,&QCheckBox::stateChanged,this,&Serial::ButtonClear);//16进制信号
}
void Serial::handleSerialError(QSerialPort::SerialPortError error)
{
    qDebug()<<"发生错误";
    if (error == QSerialPort::ResourceError) {
        //QMessageBox::critical(this, tr("Error"), "串口连接中断，请检查是否正确连接！");
        //my_SerialPort->close();
        //ui->label_status->setText("未连接");
        //m_pTimer->start(1000);

    }
}
void Serial::on_textBrowser_textChanged()
{
   //当文本框到底的时候自动下滑
   ui->textBrowser->moveCursor(QTextCursor::End);
   ui->adc_data->moveCursor(QTextCursor::End);
   ui->qTableWidget->scrollToBottom();
   ui->table_convert->scrollToBottom();
}
/*--------------------------
 *      手动清除文本
 * ------------------------*/
void Serial::ButtonClear()

{
   ui->textBrowser->clear();
}
/*--------------------------
 *      手动清空表格数据
 * ------------------------*/
void Serial::on_pushButton_tab2_clear_clicked(){
    ui->qTableWidget->clear();
    ui->adc_data->clear();
}
void Serial::on_pushButton_tab3_clear_clicked(){
    ui->table_convert->clear();
}
/*--------------------------
 *      暂停、开始显示文本
 * ------------------------*/
void Serial::ButtonStopShow()
{
    if(ui->pushButton_3->text() == QString(QStringLiteral("暂停显示")))
    {
        ui->pushButton_3->setText(QString(QStringLiteral("开始显示")));
    }
    else if(ui->pushButton_3->text() == QString(QStringLiteral("开始显示")))
    {
        ui->pushButton_3->setText(QString(QStringLiteral("暂停显示")));
    }
}
/*--------------------------
 *      将表格数据保存到EXCEL文件tab2_save
 * ------------------------*/
void Serial::on_pushButton_tab2_save_clicked(){
    QString fileName = QFileDialog::getSaveFileName(ui->qTableWidget, "保存",
            QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),
            QStringLiteral("Excel 文件(*.xlsx)"));
    if (fileName!="")
    {
        QAxObject *excel = new QAxObject;
        if (excel->setControl("Excel.Application")) //连接Excel控件
        {
            excel->dynamicCall("SetVisible (bool Visible)","false");//不显示窗体
            excel->setProperty("DisplayAlerts", false);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示
            QAxObject *workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合
            workbooks->dynamicCall("Add");//新建一个工作簿
            QAxObject *workbook = excel->querySubObject("ActiveWorkBook");//获取当前工作簿
            QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1);
            int i,j,colcount=ui->qTableWidget->columnCount();
            QAxObject *cell,*col;

            //标题行
            cell=worksheet->querySubObject("Cells(int,int)", 1, 1);
            cell->dynamicCall("SetValue(const QString&)", "ADC convert data");
            cell->querySubObject("Font")->setProperty("Size", 18);
            //调整行高
            worksheet->querySubObject("Range(const QString&)", "1:1")->setProperty("RowHeight", 30);
            //合并标题行
            QString cellTitle;
            cellTitle.append("A1:");
            cellTitle.append(QChar(colcount - 1 + 'A'));
            cellTitle.append(QString::number(1));
            QAxObject *range = worksheet->querySubObject("Range(const QString&)", cellTitle);
            range->setProperty("WrapText", true);
            range->setProperty("MergeCells", true);
            range->setProperty("HorizontalAlignment", -4108);//xlCenter
            range->setProperty("VerticalAlignment", -4108);//xlCenter

            //列标题
            for(i=0;i<colcount;i++)
            {
                QString columnName;
                columnName.append(QChar(i  + 'A'));
                columnName.append(":");
                columnName.append(QChar(i + 'A'));
                col = worksheet->querySubObject("Columns(const QString&)", columnName);
                col->setProperty("ColumnWidth", ui->qTableWidget->columnWidth(i)/6);
                cell=worksheet->querySubObject("Cells(int,int)", 2, i+1);
                columnName=ui->qTableWidget->horizontalHeaderItem(i)->text();
                cell->dynamicCall("SetValue(const QString&)", columnName);
                cell->querySubObject("Font")->setProperty("Bold", true);
                cell->querySubObject("Interior")->setProperty("Color",QColor(191, 191, 191));
                cell->setProperty("HorizontalAlignment", -4108);//xlCenter
                cell->setProperty("VerticalAlignment", -4108);//xlCenter
            }

            //数据区
            for(i=0;i<ui->qTableWidget->rowCount();i++){
                for (j=0;j<colcount;j++)
                {
                    worksheet->querySubObject("Cells(int,int)", i+3, j+1)->dynamicCall("SetValue(const QString&)", ui->qTableWidget->item(i,j)?ui->qTableWidget->item(i,j)->text():"");
                }
            }

            //画框线
            QString lrange;
            lrange.append("A2:");
            lrange.append(colcount - 1 + 'A');
            lrange.append(QString::number(ui->qTableWidget->rowCount() + 2));
            range = worksheet->querySubObject("Range(const QString&)", lrange);
            range->querySubObject("Borders")->setProperty("LineStyle", QString::number(1));
            range->querySubObject("Borders")->setProperty("Color", QColor(0, 0, 0));

            //调整数据区行高
            QString rowsName;
            rowsName.append("2:");
            rowsName.append(QString::number(ui->qTableWidget->rowCount() + 2));
            range = worksheet->querySubObject("Range(const QString&)", rowsName);
            range->setProperty("RowHeight", 20);
            workbook->dynamicCall("SaveAs(const QString&)",QDir::toNativeSeparators(fileName));//保存至fileName
            workbook->dynamicCall("Close()");//关闭工作簿
            excel->dynamicCall("Quit()");//关闭excel
            delete excel;
            excel=NULL;

            if (QMessageBox::question(NULL,QStringLiteral("完成"),QStringLiteral("文件已经导出，是否现在打开？"),QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
            {
                QDesktopServices::openUrl(QUrl("file:///" + QDir::toNativeSeparators(fileName)));
            }
        }
        else
        {
            QMessageBox::warning(NULL,QStringLiteral("错误"),QStringLiteral("未能创建 Excel 对象，请安装 Microsoft Excel."),QMessageBox::Apply);
        }
    }
}
/*--------------------------
 *      将表格数据保存到EXCEL文件tab3_save
 * ------------------------*/
void Serial::on_pushButton_tab3_save_clicked(){
    QString fileName = QFileDialog::getSaveFileName(ui->qTableWidget, "保存",
            QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),
            QStringLiteral("Excel 文件(*.xlsx)"));
    if (fileName!="")
    {
        QAxObject *excel = new QAxObject;
        if (excel->setControl("Excel.Application")) //连接Excel控件
        {
            excel->dynamicCall("SetVisible (bool Visible)","false");//不显示窗体
            excel->setProperty("DisplayAlerts", false);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示
            QAxObject *workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合
            workbooks->dynamicCall("Add");//新建一个工作簿
            QAxObject *workbook = excel->querySubObject("ActiveWorkBook");//获取当前工作簿
            QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1);
            int i,j,colcount=ui->qTableWidget->columnCount();
            QAxObject *cell,*col;

            //标题行
            cell=worksheet->querySubObject("Cells(int,int)", 1, 1);
            cell->dynamicCall("SetValue(const QString&)", "Force/Torque convert data");
            cell->querySubObject("Font")->setProperty("Size", 18);
            //调整行高
            worksheet->querySubObject("Range(const QString&)", "1:1")->setProperty("RowHeight", 30);
            //合并标题行
            QString cellTitle;
            cellTitle.append("A1:");
            cellTitle.append(QChar(colcount - 1 + 'A'));
            cellTitle.append(QString::number(1));
            QAxObject *range = worksheet->querySubObject("Range(const QString&)", cellTitle);
            range->setProperty("WrapText", true);
            range->setProperty("MergeCells", true);
            range->setProperty("HorizontalAlignment", -4108);//xlCenter
            range->setProperty("VerticalAlignment", -4108);//xlCenter

            //列标题
            for(i=0;i<colcount;i++)
            {
                QString columnName;
                columnName.append(QChar(i  + 'A'));
                columnName.append(":");
                columnName.append(QChar(i + 'A'));
                col = worksheet->querySubObject("Columns(const QString&)", columnName);
                col->setProperty("ColumnWidth", ui->qTableWidget->columnWidth(i)/6);
                cell=worksheet->querySubObject("Cells(int,int)", 2, i+1);
                columnName=ui->qTableWidget->horizontalHeaderItem(i)->text();
                cell->dynamicCall("SetValue(const QString&)", columnName);
                cell->querySubObject("Font")->setProperty("Bold", true);
                cell->querySubObject("Interior")->setProperty("Color",QColor(191, 191, 191));
                cell->setProperty("HorizontalAlignment", -4108);//xlCenter
                cell->setProperty("VerticalAlignment", -4108);//xlCenter
            }

            //数据区
            for(i=0;i<ui->qTableWidget->rowCount();i++){
                for (j=0;j<colcount;j++)
                {
                    worksheet->querySubObject("Cells(int,int)", i+3, j+1)->dynamicCall("SetValue(const QString&)", ui->qTableWidget->item(i,j)?ui->qTableWidget->item(i,j)->text():"");
                }
            }

            //画框线
            QString lrange;
            lrange.append("A2:");
            lrange.append(colcount - 1 + 'A');
            lrange.append(QString::number(ui->qTableWidget->rowCount() + 2));
            range = worksheet->querySubObject("Range(const QString&)", lrange);
            range->querySubObject("Borders")->setProperty("LineStyle", QString::number(1));
            range->querySubObject("Borders")->setProperty("Color", QColor(0, 0, 0));

            //调整数据区行高
            QString rowsName;
            rowsName.append("2:");
            rowsName.append(QString::number(ui->qTableWidget->rowCount() + 2));
            range = worksheet->querySubObject("Range(const QString&)", rowsName);
            range->setProperty("RowHeight", 20);
            workbook->dynamicCall("SaveAs(const QString&)",QDir::toNativeSeparators(fileName));//保存至fileName
            workbook->dynamicCall("Close()");//关闭工作簿
            excel->dynamicCall("Quit()");//关闭excel
            delete excel;
            excel=NULL;

            if (QMessageBox::question(NULL,QStringLiteral("完成"),QStringLiteral("文件已经导出，是否现在打开？"),QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
            {
                QDesktopServices::openUrl(QUrl("file:///" + QDir::toNativeSeparators(fileName)));
            }
        }
        else
        {
            QMessageBox::warning(NULL,QStringLiteral("错误"),QStringLiteral("未能创建 Excel 对象，请安装 Microsoft Excel."),QMessageBox::Apply);
        }
    }
}
/*--------------------------
 *      自动清理
 * ------------------------*/
void Serial::AutoClear()
{
    if(ui->checkBox->isChecked()==true)
    {
        newTime->start();

    }
    else if(ui->checkBox->isChecked()==false)
    {
        newTime->stop();
    }
}
/*----------------------------------------------------------
 *          定时器
 *----------------------------------------------------------*/
void Serial::Timer0_Init()
{
    myTime = new QTimer();
    myTime->stop();
    myTime->setInterval(1000);//1ms定时器，类似于单片机的中断函数
    connect(myTime,SIGNAL(timeout()),this,SLOT(Timer0_Task()));
    //当记满1000时执行Timer0_Task
    myTime->start();
}
void Serial::Timer0_Task()
{
    Read_Serial_Connect_Success();
}
void Serial::Timer1_Init()
{
    newTime = new QTimer();
    newTime->stop();
    newTime->setInterval(4000);//1ms定时器，类似于单片机的中断函数
    connect(newTime,SIGNAL(timeout()),this,SLOT(Timer1_Task()));
    //当记满100时执行Timer1_Task
}
void Serial::Timer1_Task()
{    
    qDebug()<<"定时器1";
    ui->textBrowser->clear();

}
/*----------------------------------------------------------
 *          COM自动识别
 *----------------------------------------------------------*/
static int Read_Serial_Port_Info()
{

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        qDebug() << "Name : " << info.portName();
        qDebug() << "Description :"<<info.description();
        if(info.portName() != NULL)
            return true;
        else
            return false;
    }
    return false;
}
void Serial::Read_Serial_Connect_Success()
{
    qDebug() << "search port with return value:"<<Read_Serial_Port_Info() << endl;
    if(Read_Serial_Port_Info())
    {
        Serial_Connect_Success_Label_Text();
    }
    else
        Serial_Connect_NG_Label_Text();
}
void Serial::Serial_Connect_Success_Label_Text()
{
    serialStrList.clear();
    serialStrList = scanSerial();
    for(int z = 0;z < serialStrList.size();z++)
        qDebug()<<"List1 is"<<serialStrList[z];
    qDebug()<<"size:"<<serialStrList.size();
    //如果有新增的COM口，则scanSerial()会变为："COMx",这样将以前的字符串添加在新增的前面即可
    for(int i = 0;i<staticList.size();i++)
    {
        serialStrList.insert(i, staticList[i]);
    }
    if(staticList != serialStrList)
    {
        for(int q = 0;q < serialStrList.size();q++)
            qDebug()<<"List2 is"<<serialStrList[q];
        staticList = serialStrList;
        staticList = compilerport.compiler_port(staticList,staticList.size());
        for(int c = 0;c < staticList.size();c++)
            qDebug()<<"List3 is"<<staticList[c];
        ui->portBox->clear();
        for (int i=0; i<staticList.size(); i++)
        {
            if(staticList[i] != "")
            ui->portBox->addItem(staticList[i]); // 在comboBox那添加串口号
        }
    }
    QFont font ( "已连接", 12, 70); //第一个属性是字体（微软雅黑），第二个是大小，第三个是加粗（权重是75）
    ui->label_1->setFont(font);
    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::darkGreen);
    ui->label_1->setPalette(pe);
    ui->label_1->setText(QStringLiteral("已连接"));
}
void Serial::Serial_Connect_NG_Label_Text()
{
    ui->portBox->clear();//当所有串口都拔出是清空
    staticList.clear();
    QFont font ( "等待中", 12, 70); //第一个属性是字体（微软雅黑），第二个是大小，第三个是加粗（权重是75）
    ui->label_1->setFont(font);
    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::red);
    ui->label_1->setPalette(pe);
    ui->label_1->setText(QStringLiteral("等待中"));
}
/*----------------------------------------------------------
 *          判定串口是否重复
 *----------------------------------------------------------*/
QStringList Serial::scanSerial()
{
    //读取串口信息
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        int judge = 0;//标志位；
        //1.利用portBox->count()统计portBox里标签的数量
        //2.利用for(i=0;count;)循环，以此判定标签里有没有重复
        //3.若没有重复则 标志位为0，否则为1.只有为0才会append()
        globlePort.setPort(info);
        for(int i=0;i<ui->portBox->count();i++)
        {
            if(globlePort.portName() == ui->portBox->itemText(i))
            {
                judge++;
            }
            qDebug()<<judge<<"key test";
        }
        if(judge == 0)
        {
            serialStrList.append(globlePort.portName());
        }     
    }
    return serialStrList;
}
/*----------------------------------------------------------
 *          slots
 *----------------------------------------------------------*/
void Serial::ButtonOpenPort(bool)
{
    if(ui->openButton->text() == QString(QStringLiteral("打开串口")))  //串口未打开
        {
            //设置端口号
            globlePort.setPortName(ui->portBox->currentText());
            //设置波特率
            globlePort.setBaudRate(ui->baudRateBox->currentText().toInt());
            //设置数据位
            qDebug()<<"data bits:"<<ui->DateBitsBox->currentText().toInt();
            switch (ui->DateBitsBox->currentText().toInt())
            {             
                case 8: globlePort.setDataBits(QSerialPort::Data8); break;
                case 7: globlePort.setDataBits(QSerialPort::Data7); break;
                case 6: globlePort.setDataBits(QSerialPort::Data6); break;
                case 5: globlePort.setDataBits(QSerialPort::Data5); break;
                default: break;
            }
            //设置停止位
            qDebug()<<"stop bits:"<<ui->stopBitsBox->currentText().toInt();
            switch (ui->stopBitsBox->currentText().toInt())
            {

                case 1: globlePort.setStopBits(QSerialPort::OneStop);break;
                case 2: globlePort.setStopBits(QSerialPort::TwoStop);break;
                default:break;
            }
            //设置校验方式
            switch (ui->ParityBox->currentIndex())
            {
                case 0: globlePort.setParity(QSerialPort::NoParity);break;
                default:break;
            }
            //设置流控制模式
            globlePort.setFlowControl(QSerialPort::NoFlowControl);
            //打开串口出现错误
            if(globlePort.open(QIODevice::ReadWrite)==false)
            {
                qDebug()<<"some error"<<ui->portBox->currentText();
                for(int i = 0;i < ui->portBox->count() ;i++)
                {
                    if( ui->portBox->itemText(i) == ui->portBox->currentText())
                    {
                        ui->portBox->removeItem(i);
                        staticList[i].remove(0,4);
                    }

                }

                QMessageBox::warning(NULL , QStringLiteral("提示"), QStringLiteral("串口打开失败！"));
                return;
            }
            // 失能串口设置控件
            ui->portBox->setEnabled(false);
            ui->ParityBox->setEnabled(false);
            ui->baudRateBox->setEnabled(false);
            ui->DateBitsBox->setEnabled(false);
            ui->stopBitsBox->setEnabled(false);
            //ui->search_Button->setEnabled(false);
            //调整串口控制按钮的文字提示
            ui->openButton->setText(QString(QStringLiteral("关闭串口")));
        }
        else       //串口已经打开
        {
            globlePort.close();
            // 使能串口设置控件
            ui->portBox->setEnabled(true);
            ui->ParityBox->setEnabled(true);
            ui->baudRateBox->setEnabled(true);
            ui->DateBitsBox->setEnabled(true);
            ui->stopBitsBox->setEnabled(true);
            //ui->search_Button->setEnabled(true);
            //调整串口控制按钮的文字提示
            ui->openButton->setText(QString(QStringLiteral("打开串口")));
         }
}
void Serial::ButtonSendPort(bool)
{
    QString date = ui->textEdit->toPlainText();
    QByteArray array = date.toLatin1();
    globlePort.write(array);
}
/*----------------------------------------------------------
 *          recive Date
 *----------------------------------------------------------*/
//读取接收到的数据
QString str_data;
static int row=0;
void Serial::ReciveDate()
{   
    QString str_temp;
    QString str_data_res;
    static QByteArray Serial_buff;//定义static，否则会被清理
    static QByteArray Serial_data;
    Serial_buff += globlePort.readAll();
    if(ui->pushButton_3->text() == QString(QStringLiteral("暂停显示")))     //数据接收显示
    {
        //判断标志结束
        if(ui->checkBoxHex->isChecked() == false)
        {
            if(Serial_buff.endsWith("\n"))
            {
                qDebug()<<Serial_buff;
                QString string = QString::fromLocal8Bit(Serial_buff);//中文字符输出
                ui->textBrowser->insertPlainText(string);
                Serial_buff.clear();//数据清理
            }
        }
        else if(ui->checkBoxHex->isChecked() == true)       //16进制显示开启
        {
                QString strDis;
                QByteArray hexData = Serial_buff.toHex();
                hexData = hexData.toUpper ();                   //转换为大写

                for(int i = 0;i<hexData.length ()-1;i+=2)       //填加空格
                {
                    QString st = hexData.mid (i,2);
                    strDis += st;
                    strDis += "  ";
                }

                str_temp.prepend(hexData);      //将QByteArray转化为Qstring型
                str_data += str_temp;           //str_data作为接收数据的存储变量，将新接收的数据添加到后面
                for(int i=0;i<str_data.length();++i){
                    if(str_data.mid(i,4)=="0800"&&str_data.length()>=i+46){
                        str_data_res = str_data.mid(i,46);
                        str_data_res += "\n";
                        ui->adc_data->insertPlainText(str_data_res);
                        table_show(str_data_res,row++);            //表格数据处理显示
                        str_data_res = "";
                        str_data = str_data.mid(i+46);
                    }

                }
                Serial_buff.clear();//先清空，以防已接收的部分变成乱码
                Serial_buff.append(strDis);
                ui->textBrowser->insertPlainText(Serial_buff);
                Serial_buff.clear();//数据清理
        }
    }
    else if(ui->pushButton_3->text() == QString(QStringLiteral("开始显示")))
    {
        Serial_buff.clear();
    }
}

void Serial::table_show(QString serial_temp,int row){

    ui->qTableWidget->insertRow(row+1);
    ui->table_convert->insertRow(row+1);
    bool ok;
    QString str_num;
    int num;
    int adc_d;
    float pwm_value;
    int motor_speed;
    QDateTime dateTime(QDateTime::currentDateTime());
    QString time = dateTime.toString("hh:mm:ss.zzz");
    ui->qTableWidget->setItem(row,0,new QTableWidgetItem(time));
    ui->table_convert->setItem(row,0,new QTableWidgetItem(time));
    ui->qTableWidget->item(row,0)->setTextAlignment(Qt::AlignCenter);             //数据中间对齐
    ui->table_convert->item(row,0)->setTextAlignment(Qt::AlignCenter);
    for(int i=2;i<=32;i=i+6){
        str_num = serial_temp.mid (i,2);
        num = str_num.toInt(&ok, 16);
        if(num>=0&&num<=5){
            str_num = serial_temp.mid (i+2,4);
            adc_d = str_num.toInt(&ok, 16);
            ui->qTableWidget->setItem(row,num+1,new QTableWidgetItem(QString::number(adc_d)));      //tab2 ADC显示
            ui->qTableWidget->item(row,num+1)->setTextAlignment(Qt::AlignCenter);             //数据中间对齐
            table_show_tab3(row,num+1,adc_d);                       //tab3 物理量显示
//            chart_show(num,adc_d);
        }
        else
            QMessageBox::warning(NULL , QStringLiteral("提示"), QStringLiteral("数据接收错误"));
    }
    str_num = serial_temp.mid (38,2);
    pwm_value = str_num.toInt(&ok, 16)/100.0;
    ui->qTableWidget->setItem(row,7,new QTableWidgetItem(QString::number(pwm_value)));      //PWM显示
    ui->table_convert->setItem(row,7,new QTableWidgetItem(QString::number(pwm_value)));      //PWM显示
    ui->qTableWidget->item(row,7)->setTextAlignment(Qt::AlignCenter);             //数据中间对齐
    ui->table_convert->item(row,7)->setTextAlignment(Qt::AlignCenter);
    str_num = serial_temp.mid (40,4);
    motor_speed = str_num.toInt(&ok, 16);
    ui->qTableWidget->setItem(row,8,new QTableWidgetItem(QString::number(motor_speed)));      //电机转速显示
    ui->table_convert->setItem(row,8,new QTableWidgetItem(QString::number(motor_speed)));      //电机转速显示
    ui->qTableWidget->item(row,8)->setTextAlignment(Qt::AlignCenter);             //数据中间对齐
    ui->table_convert->item(row,8)->setTextAlignment(Qt::AlignCenter);
}
void Serial::table_show_tab3(int row, int col, int adc){            //-----------还需要修改---
    float Fz_a = adc / 4096 * 3.3;
    float Fz_N = 206.2 * Fz_a;
    ui->table_convert->setItem(row,col,new QTableWidgetItem(QString::number(Fz_N)));
    ui->table_convert->item(row,col)->setTextAlignment(Qt::AlignCenter);
}
/*
void Serial::chart_show(int channel, int adc){
    mChart = new QChart();

    lineSeries_0->append(row, adc);             //添加到数据系列中的点会被自动显示（如果该点处在显示区间的话）
    auto xAxis = mChart->axes(Qt::Horizontal);
    QValueAxis *axisX = dynamic_cast<QValueAxis*>(mChart->axisX());
    qreal cur_x_min = axisX->min();//当前X轴显示区间的最小x值
    qreal cur_x_max = axisX->max();

    if(row > cur_x_max)//新的x值处在X轴显示区的之外了
    {
        qreal error = row - cur_x_max;//X轴的显示区向右挪error距离即可把新x显示出来
        mChart->axisX()->setRange(cur_x_min + error + 5, cur_x_max + error + 5);
    }
    //mChart->axisY()->setRange(-2, 2);
    mChart->createDefaultAxes();

    QChartView *chartView = new QChartView();
    mChart->addSeries(lineSeries_0);                  //向图表中添加系列
    lineSeries_0->setPen(QPen(Qt::black,2,Qt::SolidLine));
    lineSeries_0->setName(QStringLiteral("Fx"));
    mChart->createDefaultAxes();                       //创建默认的坐标，必须在addSeries之后调用
    mChart->setTheme(QChart::ChartThemeDark);           //设置图标主题
    mChart->setTitle(QStringLiteral("力/力矩传感器数据采集"));        //设置图标名称
    mChart->legend()->show();                          //显示图例
    chartView->setChart(mChart);                        //向chartView中添加图标
    chartView->resize(QSize(500,300));                  //重新设置chartView的大小
    chartView->setRenderHints(QPainter::Antialiasing);//消除边缘，看起来平滑一些
    ui->horizontalLayout_chart->addWidget(chartView);     //把chartView放到水平布局中（在ui中拖一个水平布局）

}
*/

