#include <iostream>
#include "passenger.h"
#include "ui_passenger.h"
#include "client_socket.h"
#include "register_form.h"
#include "control_form.h"

using namespace std;
Passenger::Passenger(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Passenger)
{
    ui->setupUi(this);

    QPixmap pic("/Users/amir/Passenger/Space_Taxi_962bbbb410.jpg");
    pic = pic.scaled (231, 101, Qt::IgnoreAspectRatio, Qt::FastTransformation );
    ui->pic_label->setPixmap(pic);
    this->setWindowTitle("Welcome!");
    socket = ClientSocket::get_instance();
}

Passenger::~Passenger()
{
    delete ui;
}

void Passenger::on_login_button_clicked()
{
    string username , pass;
    username = ui->username_line->text().toUtf8().constData();
    pass = ui->pass_line->text().toUtf8().constData();
    socket->send(username +  " login_passenger " + pass);
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

void Passenger::on_signup_page_button_clicked()
{
    Register_form* reg_form = new Register_form;
    reg_form->show();
    this->close();
}
