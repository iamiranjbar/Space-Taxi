#include "req_trip_form.h"
#include "ui_req_trip_form.h"
#include "control_form.h"
#include "rate_form.h"

using namespace std;

Req_trip_form::Req_trip_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Req_trip_form)
{
    ui->setupUi(this);
    this->setWindowTitle("Request trip form");
    socket = ClientSocket::get_instance();
}

Req_trip_form::~Req_trip_form()
{
    delete ui;
}

void Req_trip_form::on_back_button_clicked()
{
    Control_form* control_form = new Control_form;
    control_form->show();
    this->close();
}

void Req_trip_form::on_estimate_button_clicked()
{
    string send_message;
    send_message = socket->get_login_username();
    send_message = send_message + " estimate_trip ";
    if (ui->VIP_button->isChecked()){
        send_message += "VIP ";
    }
    send_message += ui->route_text->toPlainText().toUtf8().constData();
    socket->send(send_message);
    string recieved_message =  socket->receive();
    if (recieved_message == "Parameters number is not correct!"){
        ui->result_line->setText(QString::fromStdString(recieved_message));
    }
    else{
        ui->result_line->setText("Cost_Distance:" + QString::fromStdString(recieved_message));
    }
}

void Req_trip_form::on_request_button_clicked()
{
    string send_message;
    send_message = socket->get_login_username();
    send_message = send_message + " request_trip ";
    if (ui->VIP_button->isChecked()){
        send_message += "VIP ";
    }
    send_message += ui->route_text->toPlainText().toUtf8().constData();
    socket->send(send_message);
    string recieved_message =  socket->receive();
    if (recieved_message == "No driver is available!" || recieved_message == "Parameters number is not correct!"){
        ui->result_line->setText(QString::fromStdString(recieved_message));
    }
    else{
        ui->result_line->setText("Cost_Distance:" + QString::fromStdString(recieved_message));
    }
}

void Req_trip_form::on_status_button_clicked()
{
    socket->send(socket->get_login_username() + " trip_status");
    string recieved_message = socket->receive();
    ui->trip_status_text->setText(QString::fromStdString(recieved_message));
    ui->result_line->clear();
}

void Req_trip_form::on_cancel_button_clicked()
{
    socket->send(socket->get_login_username() + " cancel_trip_request");
    string recieved_message = socket->receive();
    ui->result_line->setText(QString::fromStdString(recieved_message));
    ui->trip_status_text->clear();
}

void Req_trip_form::on_rate_button_clicked()
{
    Rate_form* rate_form = new Rate_form;
    rate_form->show();
    this->close();
}
