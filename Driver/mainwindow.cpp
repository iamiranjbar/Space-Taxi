#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "register_form.h"
#include "control_form.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Welcome!");
    socket = ClientSocket::get_instance();
    QPixmap pic("/Users/amir/Driver/Space_Taxi_962bbbb410.jpg");
    pic = pic.scaled (230, 101, Qt::IgnoreAspectRatio, Qt::FastTransformation );
    ui->pic_label->setPixmap(pic);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_button_clicked()
{
    string username , pass;
    username = ui->username_line->text().toUtf8().constData();
    pass = ui->pass_line->text().toUtf8().constData();
    socket->send(username +  " login_driver " + pass);
    string recived_message = socket->receive();
    ui->result_line->setText(QString::fromStdString(recived_message));
    if (recived_message ==  "successfully login."){
        socket->set_username(username);
        socket->set_login_status(true);
        this->close();
        Control_form* control_f = new Control_form;
        control_f->show();
    }
}

void MainWindow::on_signup_button_clicked()
{
    Register_form* reg_form = new Register_form;
    reg_form->show();
    this->close();
}
