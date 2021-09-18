/********************************************************************************
** Form generated from reading UI file 'register_form.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_FORM_H
#define UI_REGISTER_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register_form
{
public:
    QPushButton *register_button;
    QLineEdit *result_line;
    QRadioButton *vip_button;
    QPushButton *back_button;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *username_line;
    QLineEdit *pass_line;
    QLineEdit *ss_number_line;
    QLineEdit *ss_model_line;
    QLineEdit *pro_year_line;
    QLineEdit *color_line;

    void setupUi(QWidget *Register_form)
    {
        if (Register_form->objectName().isEmpty())
            Register_form->setObjectName(QStringLiteral("Register_form"));
        Register_form->resize(485, 360);
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
        Register_form->setPalette(palette);
        register_button = new QPushButton(Register_form);
        register_button->setObjectName(QStringLiteral("register_button"));
        register_button->setGeometry(QRect(180, 250, 113, 32));
        result_line = new QLineEdit(Register_form);
        result_line->setObjectName(QStringLiteral("result_line"));
        result_line->setEnabled(false);
        result_line->setGeometry(QRect(160, 290, 170, 21));
        vip_button = new QRadioButton(Register_form);
        vip_button->setObjectName(QStringLiteral("vip_button"));
        vip_button->setGeometry(QRect(190, 220, 100, 20));
        back_button = new QPushButton(Register_form);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setGeometry(QRect(0, 0, 61, 32));
        widget = new QWidget(Register_form);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 30, 127, 178));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        username_line = new QLineEdit(widget);
        username_line->setObjectName(QStringLiteral("username_line"));

        verticalLayout->addWidget(username_line);

        pass_line = new QLineEdit(widget);
        pass_line->setObjectName(QStringLiteral("pass_line"));

        verticalLayout->addWidget(pass_line);

        ss_number_line = new QLineEdit(widget);
        ss_number_line->setObjectName(QStringLiteral("ss_number_line"));

        verticalLayout->addWidget(ss_number_line);

        ss_model_line = new QLineEdit(widget);
        ss_model_line->setObjectName(QStringLiteral("ss_model_line"));

        verticalLayout->addWidget(ss_model_line);

        pro_year_line = new QLineEdit(widget);
        pro_year_line->setObjectName(QStringLiteral("pro_year_line"));

        verticalLayout->addWidget(pro_year_line);

        color_line = new QLineEdit(widget);
        color_line->setObjectName(QStringLiteral("color_line"));

        verticalLayout->addWidget(color_line);


        retranslateUi(Register_form);

        QMetaObject::connectSlotsByName(Register_form);
    } // setupUi

    void retranslateUi(QWidget *Register_form)
    {
        Register_form->setWindowTitle(QApplication::translate("Register_form", "Form", Q_NULLPTR));
        register_button->setText(QApplication::translate("Register_form", "register", Q_NULLPTR));
        result_line->setPlaceholderText(QApplication::translate("Register_form", "result...", Q_NULLPTR));
        vip_button->setText(QApplication::translate("Register_form", "VIP", Q_NULLPTR));
        back_button->setText(QApplication::translate("Register_form", "back", Q_NULLPTR));
        username_line->setPlaceholderText(QApplication::translate("Register_form", "username...", Q_NULLPTR));
        pass_line->setPlaceholderText(QApplication::translate("Register_form", "password...", Q_NULLPTR));
        ss_number_line->setPlaceholderText(QApplication::translate("Register_form", "ss_number...", Q_NULLPTR));
        ss_model_line->setPlaceholderText(QApplication::translate("Register_form", "ss_model...", Q_NULLPTR));
        pro_year_line->setPlaceholderText(QApplication::translate("Register_form", "production_year...", Q_NULLPTR));
        color_line->setPlaceholderText(QApplication::translate("Register_form", "color...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register_form: public Ui_Register_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_FORM_H
