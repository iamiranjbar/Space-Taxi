#include "register_form.h"
#include "ui_register_form.h"
#include "mainwindow.h"

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

void Register_form::on_back_button_clicked()
{
    MainWindow* main_form = new MainWindow;
    main_form->show();
    this->close();
}

void Register_form::on_register_button_clicked()
{
    string username , pass , ss_number , ss_model , pro_year , color;
    username = ui->username_line->text().toUtf8().constData();
    pass = ui->pass_line->text().toUtf8().constData();
    ss_number = ui->ss_number_line->text().toUtf8().constData();
    ss_model = ui->ss_model_line->text().toUtf8().constData();
    pro_year = ui->pro_year_line->text().toUtf8().constData();
    color = ui->color_line->text().toUtf8().constData();
    string send_message = username + " register_driver " + pass +" "+ ss_number+" " + ss_model + " " + pro_year + " " + color;
    if (ui->vip_button->isChecked()){
        send_message += " VIP";
    }
    socket->send(send_message);
    string recieved_message =  socket->receive();
    ui->result_line->setText(QString::fromStdString(recieved_message));
}
