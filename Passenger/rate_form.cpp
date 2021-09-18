#include "rate_form.h"
#include "ui_rate_form.h"
#include "req_trip_form.h"

using namespace std;

Rate_form::Rate_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rate_form)
{
    ui->setupUi(this);
    this->setWindowTitle("Rate form");
    socket = ClientSocket::get_instance();
}

Rate_form::~Rate_form()
{
    delete ui;
}

void Rate_form::on_back_button_clicked()
{
    Req_trip_form* req_form = new Req_trip_form;
    req_form->show();
    this->close();
}

void Rate_form::on_rate_button_clicked()
{
    string rate = ui->rate_num_line->text().toUtf8().constData();
    socket->send(socket->get_login_username() + " rate_driver " + rate);
    string received_message = socket->receive();
    ui->result_line->setText(QString::fromStdString(received_message));
}
