#include "get_discode_form.h"
#include "ui_get_discode_form.h"
#include "control_form.h"

using namespace std;
Get_discode_form::Get_discode_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Get_discode_form)
{
    ui->setupUi(this);
    this->setWindowTitle("Get discount code form");
    socket = ClientSocket::get_instance();
}

Get_discode_form::~Get_discode_form()
{
    delete ui;
}

void Get_discode_form::on_back_button_clicked()
{
    Control_form* control_form = new Control_form;
    control_form->show();
    this->close();
}

void Get_discode_form::on_generate_button_clicked()
{
    socket->send(socket->get_login_username() + " get_discount_code");
    string recieved_message = socket->receive();
    ui->discode_text->setText(QString::fromStdString(recieved_message));
}
