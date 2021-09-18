/********************************************************************************
** Form generated from reading UI file 'trip_management_form.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIP_MANAGEMENT_FORM_H
#define UI_TRIP_MANAGEMENT_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Trip_management_form
{
public:
    QPushButton *back_button;
    QTextEdit *trip_requests_text;
    QPushButton *show_reqs_button;
    QPushButton *accept_button;
    QLineEdit *pass_username_line;
    QLineEdit *acc_result_line;
    QLineEdit *result_line;
    QPushButton *arrived_button;
    QPushButton *finish_button;

    void setupUi(QWidget *Trip_management_form)
    {
        if (Trip_management_form->objectName().isEmpty())
            Trip_management_form->setObjectName(QStringLiteral("Trip_management_form"));
        Trip_management_form->resize(447, 332);
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
        Trip_management_form->setPalette(palette);
        back_button = new QPushButton(Trip_management_form);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setGeometry(QRect(0, 0, 60, 32));
        trip_requests_text = new QTextEdit(Trip_management_form);
        trip_requests_text->setObjectName(QStringLiteral("trip_requests_text"));
        trip_requests_text->setEnabled(false);
        trip_requests_text->setGeometry(QRect(0, 30, 450, 110));
        show_reqs_button = new QPushButton(Trip_management_form);
        show_reqs_button->setObjectName(QStringLiteral("show_reqs_button"));
        show_reqs_button->setGeometry(QRect(150, 140, 140, 41));
        accept_button = new QPushButton(Trip_management_form);
        accept_button->setObjectName(QStringLiteral("accept_button"));
        accept_button->setGeometry(QRect(150, 180, 140, 40));
        pass_username_line = new QLineEdit(Trip_management_form);
        pass_username_line->setObjectName(QStringLiteral("pass_username_line"));
        pass_username_line->setGeometry(QRect(0, 184, 150, 30));
        acc_result_line = new QLineEdit(Trip_management_form);
        acc_result_line->setObjectName(QStringLiteral("acc_result_line"));
        acc_result_line->setEnabled(false);
        acc_result_line->setGeometry(QRect(290, 184, 160, 30));
        result_line = new QLineEdit(Trip_management_form);
        result_line->setObjectName(QStringLiteral("result_line"));
        result_line->setEnabled(false);
        result_line->setGeometry(QRect(150, 290, 150, 21));
        arrived_button = new QPushButton(Trip_management_form);
        arrived_button->setObjectName(QStringLiteral("arrived_button"));
        arrived_button->setGeometry(QRect(10, 240, 150, 40));
        finish_button = new QPushButton(Trip_management_form);
        finish_button->setObjectName(QStringLiteral("finish_button"));
        finish_button->setGeometry(QRect(290, 240, 150, 40));

        retranslateUi(Trip_management_form);

        QMetaObject::connectSlotsByName(Trip_management_form);
    } // setupUi

    void retranslateUi(QWidget *Trip_management_form)
    {
        Trip_management_form->setWindowTitle(QApplication::translate("Trip_management_form", "Form", Q_NULLPTR));
        back_button->setText(QApplication::translate("Trip_management_form", "back", Q_NULLPTR));
        trip_requests_text->setPlaceholderText(QApplication::translate("Trip_management_form", "Trip requests...", Q_NULLPTR));
        show_reqs_button->setText(QApplication::translate("Trip_management_form", "show trip requests", Q_NULLPTR));
        accept_button->setText(QApplication::translate("Trip_management_form", "accept", Q_NULLPTR));
        pass_username_line->setPlaceholderText(QApplication::translate("Trip_management_form", "passenger username...", Q_NULLPTR));
        acc_result_line->setPlaceholderText(QApplication::translate("Trip_management_form", "acception result...", Q_NULLPTR));
        result_line->setPlaceholderText(QApplication::translate("Trip_management_form", "result...", Q_NULLPTR));
        arrived_button->setText(QApplication::translate("Trip_management_form", "Arrived", Q_NULLPTR));
        finish_button->setText(QApplication::translate("Trip_management_form", "finish", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Trip_management_form: public Ui_Trip_management_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIP_MANAGEMENT_FORM_H
