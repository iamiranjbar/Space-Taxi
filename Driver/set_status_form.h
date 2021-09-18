#ifndef SET_STATUS_FORM_H
#define SET_STATUS_FORM_H

#include <QWidget>
#include "client_socket.h"

namespace Ui {
class Set_status_form;
}

class Set_status_form : public QWidget
{
    Q_OBJECT

public:
    explicit Set_status_form(QWidget *parent = 0);
    ~Set_status_form();

private slots:
    void on_back_button_clicked();

    void on_set_button_clicked();

private:
    Ui::Set_status_form *ui;
    ClientSocket* socket;
};

#endif // SET_STATUS_FORM_H
