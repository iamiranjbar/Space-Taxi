#ifndef REQ_TRIP_FORM_H
#define REQ_TRIP_FORM_H

#include <QWidget>
#include "client_socket.h"

namespace Ui {
class Req_trip_form;
}

class Req_trip_form : public QWidget
{
    Q_OBJECT

public:
    explicit Req_trip_form(QWidget *parent = 0);
    ~Req_trip_form();

private slots:
    void on_back_button_clicked();

    void on_estimate_button_clicked();

    void on_request_button_clicked();

    void on_status_button_clicked();

    void on_cancel_button_clicked();

    void on_rate_button_clicked();

private:
    Ui::Req_trip_form *ui;
    ClientSocket* socket;
};

#endif // REQ_TRIP_FORM_H
