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
    QPushButton *set_stat_button;
    QPushButton *trip_management_button;
    QLabel *hello_label;
    QLabel *username_label;
    QLabel *credit_pic_label;
    QLabel *credit_label;
    QLabel *time_pic_label;
    QLabel *time_label;
    QLabel *status_label;
    QLabel *stats_label;

    void setupUi(QWidget *Control_form)
    {
        if (Control_form->objectName().isEmpty())
            Control_form->setObjectName(QStringLiteral("Control_form"));
        Control_form->resize(455, 332);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 255, 128, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 255, 192, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 255, 160, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 127, 64, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 170, 85, 255));
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
        QBrush brush7(QColor(127, 255, 191, 255));
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
        logout_button->setGeometry(QRect(160, 270, 113, 41));
        set_stat_button = new QPushButton(Control_form);
        set_stat_button->setObjectName(QStringLiteral("set_stat_button"));
        set_stat_button->setGeometry(QRect(30, 220, 113, 41));
        trip_management_button = new QPushButton(Control_form);
        trip_management_button->setObjectName(QStringLiteral("trip_management_button"));
        trip_management_button->setGeometry(QRect(280, 220, 140, 41));
        hello_label = new QLabel(Control_form);
        hello_label->setObjectName(QStringLiteral("hello_label"));
        hello_label->setGeometry(QRect(110, 130, 90, 30));
        QFont font;
        font.setFamily(QStringLiteral("Papyrus"));
        font.setPointSize(36);
        hello_label->setFont(font);
        hello_label->setStyleSheet(QStringLiteral("color : orange;"));
        username_label = new QLabel(Control_form);
        username_label->setObjectName(QStringLiteral("username_label"));
        username_label->setGeometry(QRect(220, 120, 110, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Zapfino"));
        font1.setPointSize(30);
        font1.setItalic(true);
        username_label->setFont(font1);
        username_label->setStyleSheet(QStringLiteral("color : skyblue;"));
        credit_pic_label = new QLabel(Control_form);
        credit_pic_label->setObjectName(QStringLiteral("credit_pic_label"));
        credit_pic_label->setGeometry(QRect(30, 40, 51, 41));
        credit_label = new QLabel(Control_form);
        credit_label->setObjectName(QStringLiteral("credit_label"));
        credit_label->setGeometry(QRect(90, 50, 70, 60));
        QFont font2;
        font2.setFamily(QStringLiteral("Papyrus"));
        font2.setPointSize(24);
        credit_label->setFont(font2);
        credit_label->setStyleSheet(QStringLiteral("color : red;"));
        time_pic_label = new QLabel(Control_form);
        time_pic_label->setObjectName(QStringLiteral("time_pic_label"));
        time_pic_label->setGeometry(QRect(250, 30, 60, 51));
        time_label = new QLabel(Control_form);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setGeometry(QRect(320, 30, 90, 50));
        QFont font3;
        font3.setPointSize(24);
        time_label->setFont(font3);
        time_label->setStyleSheet(QStringLiteral("color : red;"));
        status_label = new QLabel(Control_form);
        status_label->setObjectName(QStringLiteral("status_label"));
        status_label->setGeometry(QRect(90, 170, 90, 30));
        QFont font4;
        font4.setFamily(QStringLiteral("Herculanum"));
        font4.setPointSize(24);
        status_label->setFont(font4);
        status_label->setStyleSheet(QStringLiteral("color : yellow;"));
        stats_label = new QLabel(Control_form);
        stats_label->setObjectName(QStringLiteral("stats_label"));
        stats_label->setGeometry(QRect(180, 170, 280, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Herculanum"));
        stats_label->setFont(font5);
        stats_label->setStyleSheet(QStringLiteral("color : red;"));

        retranslateUi(Control_form);

        QMetaObject::connectSlotsByName(Control_form);
    } // setupUi

    void retranslateUi(QWidget *Control_form)
    {
        Control_form->setWindowTitle(QApplication::translate("Control_form", "Form", Q_NULLPTR));
        logout_button->setText(QApplication::translate("Control_form", "logout", Q_NULLPTR));
        set_stat_button->setText(QApplication::translate("Control_form", "set status", Q_NULLPTR));
        trip_management_button->setText(QApplication::translate("Control_form", "trip management", Q_NULLPTR));
        hello_label->setText(QApplication::translate("Control_form", "Hello", Q_NULLPTR));
        username_label->setText(QString());
        credit_pic_label->setText(QString());
        credit_label->setText(QString());
        time_pic_label->setText(QString());
        time_label->setText(QString());
        status_label->setText(QApplication::translate("Control_form", "status:", Q_NULLPTR));
        stats_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Control_form: public Ui_Control_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_FORM_H
