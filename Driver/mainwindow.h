#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "client_socket.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_login_button_clicked();

    void on_signup_button_clicked();

private:
    Ui::MainWindow *ui;
    ClientSocket* socket;
};

#endif // MAINWINDOW_H
