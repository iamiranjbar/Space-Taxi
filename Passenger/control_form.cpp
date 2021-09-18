#include "control_form.h"
#include "ui_control_form.h"
#include "passenger.h"
#include "charge_acc_form.h"
#include "get_discode_form.h"
#include "req_trip_form.h"

using namespace std;

Control_form::Control_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Control_form)
{
    ui->setupUi(this);
    QPixmap pic("/Users/amir/Passenger/money_bag_dollar.png");
    pic = pic.scaled (41, 31, Qt::IgnoreAspectRatio, Qt::FastTransformation );
    ui->credit_pic_label->setPixmap(pic);
    this->setWindowTitle("Control form");
    socket = ClientSocket::get_instance();
    string username = socket->get_login_username();
    ui->username_lable->setText(QString::fromStdString(username));
    socket->send(socket->get_login_username() + " get_credit");
    string credit = socket->receive();
    ui->credit_label->setText(QString::fromStdString(credit));
    QPixmap pict("/Users/amir/Passenger/Measurement-Units-Time-icon.png");
    pict = pict.scaled (51, 41, Qt::IgnoreAspectRatio, Qt::FastTransformation );
    ui->time_pic_label->setPixmap(pict);
    socket->send("time get_time");
    string time = socket->receive();
    ui->time_label->setText(QString::fromStdString(time));
}

Control_form::~Control_form()
{
    delete ui;
}

void Control_form::on_logout_button_clicked()
{
    this->close();
    Passenger* p_form = new Passenger;
    p_form->show();
    socket->set_login_status(false);
}

void Control_form::on_charge_acc_button_clicked()
{
    Charge_acc_form* charge_acc_form = new Charge_acc_form;
    charge_acc_form->show();
    this->close();
}

void Control_form::on_get_discode_button_clicked()
{
    Get_discode_form* discode_f = new Get_discode_form;
    discode_f->show();
    this->close();
}

void Control_form::on_req_trip_button_clicked()
{
    Req_trip_form* req_form = new Req_trip_form;
    req_form->show();
    this->close();
}
