#include "register_form.h"
#include "ui_register_form.h"

using namespace std;

Register_form::Register_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register_form)
{
    ui->setupUi(this);
    this->setWindowTitle("Register form");
    socket = ClientSocket::get_instance();
}

Register_form::~Register_form()
{
    delete ui;
}

void Register_form::on_back_butoon_clicked()
{
    Passenger* passenger_form = new Passenger;
    passenger_form->show();
    this->close();
}

void Register_form::on_register_button_clicked()
{
    string username , pass , phone_number , dis_code;
    username = ui->username_line->text().toUtf8().constData();
    pass = ui->pass_line->text().toUtf8().constData();
    phone_number = ui->tel_num_line->text().toUtf8().constData();
    dis_code = ui->discode_line->text().toUtf8().constData();
    socket->send(username + " register_passenger " + pass +" "+ phone_number+" " + dis_code);
    string recieved_message =  socket->receive();
    ui->result_line->setText(QString::fromStdString(recieved_message));
}
