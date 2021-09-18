#ifndef REGISTER_FORM_H
#define REGISTER_FORM_H

#include <QWidget>
#include "client_socket.h"

namespace Ui {
class Register_form;
}

class Register_form : public QWidget
{
    Q_OBJECT

public:
    explicit Register_form(QWidget *parent = 0);
    ~Register_form();

private slots:
    void on_back_button_clicked();

    void on_register_button_clicked();

private:
    Ui::Register_form *ui;
    ClientSocket* socket;
};

#endif // REGISTER_FORM_H
