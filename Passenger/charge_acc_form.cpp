#include "charge_acc_form.h"
#include "ui_charge_acc_form.h"
#include "control_form.h"

using namespace std;

Charge_acc_form::Charge_acc_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Charge_acc_form)
{
    ui->setupUi(this);
    this->setWindowTitle("Charge account form");
    socket = ClientSocket::get_instance();
}

Charge_acc_form::~Charge_acc_form()
{
    delete ui;
}

void Charge_acc_form::on_back_button_clicked()
{
    Control_form* control_form = new Control_form;
    control_form->show();
    this->close();
}

void Charge_acc_form::on_charge_button_clicked()
{
    string amount;
    amount = ui->amount_line->text().toUtf8().constData();
    string send_message = socket->get_login_username() + " charge_account " + amount;
    socket->send(send_message);
    string recieved_message =  socket->receive();
    ui->result_line->setText(QString::fromStdString(recieved_message));
}
