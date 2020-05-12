#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QTextEdit>
#include <QMessageBox>
#include <QWindow>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);
    //ui->pushButton->setAutoDefault(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText(ui->label->text() + ui->input_text->toPlainText() + "\n");
    ui->input_text->clear();
}

void MainWindow::on_action_Set_Port_triggered()
{
    QMessageBox msg;
    msg.setWindowTitle("Checking...");
    msg.setText("NIIIIIICE!!");
    msg.exec();
}

void MainWindow::on_input_text_textChanged()
{
    if(ui->input_text->toPlainText() == NULL){
        ui->pushButton->setEnabled(false);
    }
    else{
        ui->pushButton->setEnabled(true);
    }
}

void MainWindow::on_action_Default_Port_triggered()
{

}

void MainWindow::on_action_Save_Image_triggered()
{

}
