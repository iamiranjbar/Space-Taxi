#ifndef CONTROL_FORM_H
#define CONTROL_FORM_H

#include <QWidget>
#include "client_socket.h"

namespace Ui {
class Control_form;
}

class Control_form : public QWidget
{
    Q_OBJECT

public:
    explicit Control_form(QWidget *parent = 0);
    ~Control_form();

private slots:
    void on_logout_button_clicked();

    void on_charge_acc_button_clicked();

    void on_get_discode_button_clicked();

    void on_req_trip_button_clicked();

private:
    Ui::Control_form *ui;
    ClientSocket* socket;
};

#endif // CONTROL_FORM_H
