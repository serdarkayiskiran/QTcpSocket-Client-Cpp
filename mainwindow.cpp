#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    baglantiNoktasi = new QTcpSocket(this);
    connect(baglantiNoktasi,SIGNAL(readyRead()),this,SLOT(readyRead()));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_baglantiKurButon_clicked()
{
    ip=ui->ipLineEdit->text();
    port=ui->portLineEdit->text().toInt();

    if(ip=="" || QString::number(port)=="")
    {
        ui->durumLabel->setText("Lütfen IP ve Port adreslerinizi kontrol edin!");
        ui->durumLabel->setStyleSheet("color:red");
        return;
    }

    ui->terminalLineEdit->clear();
    baglantiNoktasi->connectToHost(ip,port);
    if(baglantiNoktasi->waitForConnected(300))
    {
        ui->durumLabel->setText("IP : "+ip+"Port : "+QString::number(port)+" Baglantı Kuruldu");
        ui->durumLabel->setStyleSheet("color:green");
    }
    else
    {
        ui->durumLabel->setText("IP : "+ip+"Port : "+QString::number(port)+" Baglantı Kurulamadi");
        ui->durumLabel->setStyleSheet("color:red");
    }
}


void MainWindow::on_baglantiKesButon_clicked()
{
    if(baglantiNoktasi->isOpen())
    {
       baglantiNoktasi->close();
       ui->durumLabel->setText("IP : "+ip+"Port : "+QString::number(port)+" Baglantı Kesildi");
       ui->durumLabel->setStyleSheet("color:red");
    }
}


void MainWindow::on_mesajGonderButon_clicked()
{
 //test

    if(ui->mesajGonderLineEdit->text()=="")
    {
        ui->mesajGonderLineEdit->setPlaceholderText("Lütfen bir mesaj yazın...");
        ui->mesajGonderLineEdit->setStyleSheet("color:red");
        return;
    }


    char veri[1024];
    if(baglantiNoktasi->isWritable())
    {
        QString mesaj=ui->mesajGonderLineEdit->text();
        memset(veri,'\0',sizeof(veri)+1);
        memcpy(veri,ui->mesajGonderLineEdit->text().toUtf8(),mesaj.length());
        baglantiNoktasi->write(veri);
        baglantiNoktasi->waitForBytesWritten(1000);
        ui->terminalLineEdit->appendPlainText("Client : " + QString(veri));
        ui->mesajGonderLineEdit->clear();

    }
}

void MainWindow::readyRead()
{
    //test
    QByteArray veri;
    veri = baglantiNoktasi->readAll();
    ui->terminalLineEdit->appendPlainText("Server : "+QString(veri));
}


void MainWindow::on_mesajGonderLineEdit_textEdited(const QString &arg1)
{
    ui->mesajGonderLineEdit->setStyleSheet("color:white");
}

