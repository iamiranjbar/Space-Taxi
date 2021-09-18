#ifndef PASSENGER_H
#define PASSENGER_H

#include <QMainWindow>
#include "client_socket.h"
#include "control_form.h"

namespace Ui {
class Passenger;
}

class Passenger : public QMainWindow
{
    Q_OBJECT

public:
    explicit Passenger(QWidget *parent = 0);
    ~Passenger();

private slots:
    void on_login_button_clicked();

    void on_signup_page_button_clicked();

private:
    Ui::Passenger *ui;
    ClientSocket* socket;
};

#endif // PASSENGER_H
