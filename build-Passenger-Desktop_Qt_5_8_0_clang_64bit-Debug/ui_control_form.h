/********************************************************************************
** Form generated from reading UI file 'control_form.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_FORM_H
#define UI_CONTROL_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Control_form
{
public:
    QPushButton *logout_button;
    QPushButton *charge_acc_button;
    QPushButton *get_discode_button;
    QPushButton *req_trip_button;
    QLabel *hello_lable;
    QLabel *username_lable;
    QLabel *credit_pic_label;
    QLabel *credit_label;
    QLabel *time_pic_label;
    QLabel *time_label;

    void setupUi(QWidget *Control_form)
    {
        if (Control_form->objectName().isEmpty())
            Control_form->setObjectName(QStringLiteral("Control_form"));
        Control_form->resize(400, 300);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(102, 204, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(230, 247, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(166, 225, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(51, 102, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(68, 136, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(178, 229, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Control_form->setPalette(palette);
        logout_button = new QPushButton(Control_form);
        logout_button->setObjectName(QStringLiteral("logout_button"));
        logout_button->setGeometry(QRect(140, 230, 113, 41));
        charge_acc_button = new QPushButton(Control_form);
        charge_acc_button->setObjectName(QStringLiteral("charge_acc_button"));
        charge_acc_button->setGeometry(QRect(10, 170, 131, 41));
        get_discode_button = new QPushButton(Control_form);
        get_discode_button->setObjectName(QStringLiteral("get_discode_button"));
        get_discode_button->setGeometry(QRect(252, 170, 131, 41));
        req_trip_button = new QPushButton(Control_form);
        req_trip_button->setObjectName(QStringLiteral("req_trip_button"));
        req_trip_button->setGeometry(QRect(130, 120, 121, 41));
        hello_lable = new QLabel(Control_form);
        hello_lable->setObjectName(QStringLiteral("hello_lable"));
        hello_lable->setGeometry(QRect(110, 80, 56, 41));
        QFont font;
        font.setFamily(QStringLiteral("Papyrus"));
        font.setPointSize(24);
        hello_lable->setFont(font);
        hello_lable->setStyleSheet(QStringLiteral("color : yellow;"));
        username_lable = new QLabel(Control_form);
        username_lable->setObjectName(QStringLiteral("username_lable"));
        username_lable->setGeometry(QRect(175, 71, 101, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("American Typewriter"));
        font1.setPointSize(24);
        username_lable->setFont(font1);
        username_lable->setStyleSheet(QStringLiteral("color : green;"));
        credit_pic_label = new QLabel(Control_form);
        credit_pic_label->setObjectName(QStringLiteral("credit_pic_label"));
        credit_pic_label->setGeometry(QRect(20, 10, 41, 31));
        credit_label = new QLabel(Control_form);
        credit_label->setObjectName(QStringLiteral("credit_label"));
        credit_label->setGeometry(QRect(80, 10, 81, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Zapfino"));
        font2.setPointSize(18);
        font2.setItalic(true);
        credit_label->setFont(font2);
        time_pic_label = new QLabel(Control_form);
        time_pic_label->setObjectName(QStringLiteral("time_pic_label"));
        time_pic_label->setGeometry(QRect(210, 10, 51, 41));
        time_pic_label->setStyleSheet(QStringLiteral("color = green;"));
        time_label = new QLabel(Control_form);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setGeometry(QRect(280, 10, 111, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Papyrus"));
        font3.setPointSize(18);
        time_label->setFont(font3);
        time_label->setStyleSheet(QStringLiteral("color : purple;"));

        retranslateUi(Control_form);

        QMetaObject::connectSlotsByName(Control_form);
    } // setupUi

    void retranslateUi(QWidget *Control_form)
    {
        Control_form->setWindowTitle(QApplication::translate("Control_form", "Form", Q_NULLPTR));
        logout_button->setText(QApplication::translate("Control_form", "logout", Q_NULLPTR));
        charge_acc_button->setText(QApplication::translate("Control_form", "charge account", Q_NULLPTR));
        get_discode_button->setText(QApplication::translate("Control_form", "get dicount code", Q_NULLPTR));
        req_trip_button->setText(QApplication::translate("Control_form", "request trip", Q_NULLPTR));
        hello_lable->setText(QApplication::translate("Control_form", "Hello", Q_NULLPTR));
        username_lable->setText(QString());
        credit_pic_label->setText(QString());
        credit_label->setText(QString());
        time_pic_label->setText(QString());
        time_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Control_form: public Ui_Control_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_FORM_H
