#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("NICE!!");
}

void MainWindow::on_action_Set_Port_triggered()
{
    QMessageBox msg;
    msg.setText("NIIIIIICE!!");
    msg.exec();

}
