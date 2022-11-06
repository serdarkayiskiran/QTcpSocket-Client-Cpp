#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qglobal.h>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString ip;
    int port;


private slots:
    void on_baglantiKurButon_clicked();

    void on_baglantiKesButon_clicked();

    void on_mesajGonderButon_clicked();

    void readyRead();

    void on_mesajGonderLineEdit_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;

    QTcpSocket *baglantiNoktasi;

};
#endif // MAINWINDOW_H
