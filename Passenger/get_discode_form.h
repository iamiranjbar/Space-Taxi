#ifndef GET_DISCODE_FORM_H
#define GET_DISCODE_FORM_H

#include <QWidget>
#include "client_socket.h"

namespace Ui {
class Get_discode_form;
}

class Get_discode_form : public QWidget
{
    Q_OBJECT

public:
    explicit Get_discode_form(QWidget *parent = 0);
    ~Get_discode_form();

private slots:
    void on_back_button_clicked();

    void on_generate_button_clicked();

private:
    Ui::Get_discode_form *ui;
    ClientSocket* socket;
};

#endif // GET_DISCODE_FORM_H
