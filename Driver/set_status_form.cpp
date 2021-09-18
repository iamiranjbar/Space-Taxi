#include "set_status_form.h"
#include "ui_set_status_form.h"
#include "control_form.h"

using namespace std;

Set_status_form::Set_status_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Set_status_form)
{
    ui->setupUi(this);
    this->setWindowTitle("Set status form");
    socket = ClientSocket::get_instance();
}

Set_status_form::~Set_status_form()
{
    delete ui;
}

void Set_status_form::on_back_button_clicked()
{
   Control_form* control_form = new Control_form;
   control_form->show();
   this->close();
}

void Set_status_form::on_set_button_clicked()
{
    string status = ui->status_line->text().toUtf8().constData();
    socket->send(socket->get_login_username() + " set_status " + status);
    string received_message = socket->receive();
    ui->result_line->setText(QString::fromStdString(received_message));
}
