#ifndef RATE_FORM_H
#define RATE_FORM_H

#include <QWidget>
#include "client_socket.h"

namespace Ui {
class Rate_form;
}

class Rate_form : public QWidget
{
    Q_OBJECT

public:
    explicit Rate_form(QWidget *parent = 0);
    ~Rate_form();

private slots:
    void on_back_button_clicked();

    void on_rate_button_clicked();

private:
    Ui::Rate_form *ui;
    ClientSocket* socket;
};

#endif // RATE_FORM_H
