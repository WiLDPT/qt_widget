#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QTextEdit>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText(ui->input_text->toPlainText());
    //ui->label->;
}

void MainWindow::on_action_Set_Port_triggered()
{
    QMessageBox msg;
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
