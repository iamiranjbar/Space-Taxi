/********************************************************************************
** Form generated from reading UI file 'req_trip_form.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQ_TRIP_FORM_H
#define UI_REQ_TRIP_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Req_trip_form
{
public:
    QPushButton *back_button;
    QTextEdit *route_text;
    QLineEdit *result_line;
    QPushButton *status_button;
    QTextEdit *trip_status_text;
    QPushButton *cancel_button;
    QPushButton *rate_button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *estimate_button;
    QPushButton *request_button;
    QRadioButton *VIP_button;

    void setupUi(QWidget *Req_trip_form)
    {
        if (Req_trip_form->objectName().isEmpty())
            Req_trip_form->setObjectName(QStringLiteral("Req_trip_form"));
        Req_trip_form->resize(400, 300);
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
        Req_trip_form->setPalette(palette);
        back_button = new QPushButton(Req_trip_form);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setGeometry(QRect(0, 0, 61, 32));
        route_text = new QTextEdit(Req_trip_form);
        route_text->setObjectName(QStringLiteral("route_text"));
        route_text->setGeometry(QRect(10, 30, 380, 79));
        result_line = new QLineEdit(Req_trip_form);
        result_line->setObjectName(QStringLiteral("result_line"));
        result_line->setEnabled(false);
        result_line->setGeometry(QRect(10, 150, 380, 21));
        status_button = new QPushButton(Req_trip_form);
        status_button->setObjectName(QStringLiteral("status_button"));
        status_button->setGeometry(QRect(110, 180, 180, 41));
        trip_status_text = new QTextEdit(Req_trip_form);
        trip_status_text->setObjectName(QStringLiteral("trip_status_text"));
        trip_status_text->setEnabled(false);
        trip_status_text->setGeometry(QRect(0, 220, 430, 81));
        cancel_button = new QPushButton(Req_trip_form);
        cancel_button->setObjectName(QStringLiteral("cancel_button"));
        cancel_button->setGeometry(QRect(0, 181, 113, 41));
        rate_button = new QPushButton(Req_trip_form);
        rate_button->setObjectName(QStringLiteral("rate_button"));
        rate_button->setGeometry(QRect(290, 180, 110, 41));
        widget = new QWidget(Req_trip_form);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 110, 360, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        estimate_button = new QPushButton(widget);
        estimate_button->setObjectName(QStringLiteral("estimate_button"));

        horizontalLayout->addWidget(estimate_button);

        request_button = new QPushButton(widget);
        request_button->setObjectName(QStringLiteral("request_button"));

        horizontalLayout->addWidget(request_button);

        VIP_button = new QRadioButton(widget);
        VIP_button->setObjectName(QStringLiteral("VIP_button"));

        horizontalLayout->addWidget(VIP_button);


        retranslateUi(Req_trip_form);

        QMetaObject::connectSlotsByName(Req_trip_form);
    } // setupUi

    void retranslateUi(QWidget *Req_trip_form)
    {
        Req_trip_form->setWindowTitle(QApplication::translate("Req_trip_form", "Form", Q_NULLPTR));
        back_button->setText(QApplication::translate("Req_trip_form", "back", Q_NULLPTR));
        route_text->setPlaceholderText(QApplication::translate("Req_trip_form", "route... (Please enter your startpoint first and after that enter destinations in order.)", Q_NULLPTR));
        result_line->setPlaceholderText(QApplication::translate("Req_trip_form", "result...", Q_NULLPTR));
        status_button->setText(QApplication::translate("Req_trip_form", "status", Q_NULLPTR));
        trip_status_text->setPlaceholderText(QApplication::translate("Req_trip_form", "Trip status...", Q_NULLPTR));
        cancel_button->setText(QApplication::translate("Req_trip_form", "cancel", Q_NULLPTR));
        rate_button->setText(QApplication::translate("Req_trip_form", "rate", Q_NULLPTR));
        estimate_button->setText(QApplication::translate("Req_trip_form", "estimate", Q_NULLPTR));
        request_button->setText(QApplication::translate("Req_trip_form", "request", Q_NULLPTR));
        VIP_button->setText(QApplication::translate("Req_trip_form", "VIP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Req_trip_form: public Ui_Req_trip_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQ_TRIP_FORM_H
