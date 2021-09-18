#ifndef TRIP_MANAGEMENT_FORM_H
#define TRIP_MANAGEMENT_FORM_H

#include <QWidget>
#include "client_socket.h"

namespace Ui {
class Trip_management_form;
}

class Trip_management_form : public QWidget
{
    Q_OBJECT

public:
    explicit Trip_management_form(QWidget *parent = 0);
    ~Trip_management_form();

private slots:
    void on_back_button_clicked();

    void on_show_reqs_button_clicked();

    void on_accept_button_clicked();

    void on_arrived_button_clicked();

    void on_finish_button_clicked();

private:
    Ui::Trip_management_form *ui;
    ClientSocket* socket;
};

#endif // TRIP_MANAGEMENT_FORM_H
