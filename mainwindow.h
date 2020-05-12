#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_action_Set_Port_triggered();

    void on_input_text_textChanged();

    void on_action_Default_Port_triggered();

    void on_action_enter_key_triggered();

    void on_action_Save_Image_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
