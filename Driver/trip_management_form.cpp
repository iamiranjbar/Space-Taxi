#include "trip_management_form.h"
#include "ui_trip_management_form.h"
#include "control_form.h"

using namespace std;

Trip_management_form::Trip_management_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Trip_management_form)
{
    ui->setupUi(this);
    this->setWindowTitle("Trip management form");
    socket = ClientSocket::get_instance();
}

Trip_management_form::~Trip_management_form()
{
    delete ui;
}

void Trip_management_form::on_back_button_clicked()
{
    Control_form* control_form = new Control_form;
    control_form->show();
    this->close();
}

void Trip_management_form::on_show_reqs_button_clicked()
{
    socket->send(socket->get_login_username() + " show_trip_requests");
    string received_message = socket->receive();
    ui->trip_requests_text->setText(QString::fromStdString(received_message));
}

void Trip_management_form::on_accept_button_clicked()
{
    string username;
    username = ui->pass_username_line->text().toUtf8().constData();
    string send_message;
    send_message = socket->get_login_username() + " accept_trip_request " + username;
    socket->send(send_message);
    string received_message;
    received_message = socket->receive();
    ui->acc_result_line->setText(QString::fromStdString(received_message));
}

void Trip_management_form::on_arrived_button_clicked()
{
    socket->send( socket->get_login_username() + " arrived" );
    string received_message = socket->receive();
    ui->result_line->setText(QString::fromStdString(received_message));
}

void Trip_management_form::on_finish_button_clicked()
{
    socket->send( socket->get_login_username() + " end_trip" );
    string received_message = socket->receive();
    ui->result_line->setText(QString::fromStdString(received_message));
}
