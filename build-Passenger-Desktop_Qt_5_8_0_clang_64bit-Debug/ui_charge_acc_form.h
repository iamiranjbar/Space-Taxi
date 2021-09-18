/********************************************************************************
** Form generated from reading UI file 'charge_acc_form.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARGE_ACC_FORM_H
#define UI_CHARGE_ACC_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Charge_acc_form
{
public:
    QPushButton *back_button;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *amount_line;
    QPushButton *charge_button;
    QLineEdit *result_line;

    void setupUi(QWidget *Charge_acc_form)
    {
        if (Charge_acc_form->objectName().isEmpty())
            Charge_acc_form->setObjectName(QStringLiteral("Charge_acc_form"));
        Charge_acc_form->resize(400, 300);
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
        Charge_acc_form->setPalette(palette);
        back_button = new QPushButton(Charge_acc_form);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setGeometry(QRect(0, 0, 71, 32));
        widget = new QWidget(Charge_acc_form);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(140, 70, 137, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        amount_line = new QLineEdit(widget);
        amount_line->setObjectName(QStringLiteral("amount_line"));

        verticalLayout->addWidget(amount_line);

        charge_button = new QPushButton(widget);
        charge_button->setObjectName(QStringLiteral("charge_button"));

        verticalLayout->addWidget(charge_button);

        result_line = new QLineEdit(widget);
        result_line->setObjectName(QStringLiteral("result_line"));
        result_line->setEnabled(false);

        verticalLayout->addWidget(result_line);


        retranslateUi(Charge_acc_form);

        QMetaObject::connectSlotsByName(Charge_acc_form);
    } // setupUi

    void retranslateUi(QWidget *Charge_acc_form)
    {
        Charge_acc_form->setWindowTitle(QApplication::translate("Charge_acc_form", "Form", Q_NULLPTR));
        back_button->setText(QApplication::translate("Charge_acc_form", "back", Q_NULLPTR));
        amount_line->setPlaceholderText(QApplication::translate("Charge_acc_form", "amount", Q_NULLPTR));
        charge_button->setText(QApplication::translate("Charge_acc_form", "Charge", Q_NULLPTR));
        result_line->setPlaceholderText(QApplication::translate("Charge_acc_form", "result...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Charge_acc_form: public Ui_Charge_acc_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARGE_ACC_FORM_H
