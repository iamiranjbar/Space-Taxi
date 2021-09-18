#ifndef CHARGE_ACC_FORM_H
#define CHARGE_ACC_FORM_H

#include <QWidget>
#include "client_socket.h"

namespace Ui {
class Charge_acc_form;
}

class Charge_acc_form : public QWidget
{
    Q_OBJECT

public:
    explicit Charge_acc_form(QWidget *parent = 0);
    ~Charge_acc_form();

private slots:
    void on_back_button_clicked();

    void on_charge_button_clicked();

private:
    Ui::Charge_acc_form *ui;
    ClientSocket* socket;
};

#endif // CHARGE_ACC_FORM_H
