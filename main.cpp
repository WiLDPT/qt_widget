#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.showFullScreen();
    w.show();
    //w.showMaximized();

    //QLabel *label = new QLabel("Gametime!");
    //label->show();

    //QPushButton *button = new QPushButton("Quit the program");
    //QObject::connect(button, SIGNAL(clicked()), &a, SLOT(quit()));
    //button->show();


    return a.exec();
}
