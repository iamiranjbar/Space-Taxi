#include "control_form.h"
#include "ui_control_form.h"
#include "mainwindow.h"
#include "set_status_form.h"
#include "trip_management_form.h"

using namespace std;

Control_form::Control_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Control_form)
{
    ui->setupUi(this);
    this->setWindowTitle("Control form");
    socket = ClientSocket::get_instance();
    string username = socket->get_login_username();
    ui->username_label->setText(QString::fromStdString(username));
    QPixmap pic("/Users/amir/Passenger/money_bag_dollar.png");
    pic = pic.scaled (51, 41, Qt::IgnoreAspectRatio, Qt::FastTransformation );
    ui->credit_pic_label->setPixmap(pic);
    socket->send(socket->get_login_username() + " get_credit");
    string credit = socket->receive();
    ui->credit_label->setText(QString::fromStdString(credit));
    QPixmap pict("/Users/amir/Passenger/Measurement-Units-Time-icon.png");
    pict = pict.scaled (60, 51, Qt::IgnoreAspectRatio, Qt::FastTransformation );
    ui->time_pic_label->setPixmap(pict);
    socket->send("time get_time");
    string time = socket->receive();
    ui->time_label->setText(QString::fromStdString(time));
    socket->send( socket->get_login_username() + " get_status");
    string status = socket->receive();
    ui->stats_label->setText(QString::fromStdString( status));
}

Control_form::~Control_form()
{
    delete ui;
}

void Control_form::on_logout_button_clicked()
{
    this->close();
    MainWindow* main_form = new MainWindow;
    main_form->show();
    socket->set_login_status(false);
}

void Control_form::on_set_stat_button_clicked()
{
    Set_status_form* stat_form = new Set_status_form;
    stat_form->show();
    this->close();
}

void Control_form::on_trip_management_button_clicked()
{
    Trip_management_form* trip_form = new Trip_management_form;
    trip_form->show();
    this->close();
}
