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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register_form
{
public:
    QPushButton *back_butoon;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *username_line;
    QLineEdit *pass_line;
    QLineEdit *tel_num_line;
    QLineEdit *discode_line;
    QPushButton *register_button;
    QLineEdit *result_line;

    void setupUi(QWidget *Register_form)
    {
        if (Register_form->objectName().isEmpty())
            Register_form->setObjectName(QStringLiteral("Register_form"));
        Register_form->resize(400, 300);
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
        Register_form->setPalette(palette);
        Register_form->setStyleSheet(QStringLiteral(""));
        back_butoon = new QPushButton(Register_form);
        back_butoon->setObjectName(QStringLiteral("back_butoon"));
        back_butoon->setGeometry(QRect(10, 10, 81, 32));
        widget = new QWidget(Register_form);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(130, 40, 139, 184));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        username_line = new QLineEdit(widget);
        username_line->setObjectName(QStringLiteral("username_line"));

        verticalLayout->addWidget(username_line);

        pass_line = new QLineEdit(widget);
        pass_line->setObjectName(QStringLiteral("pass_line"));

        verticalLayout->addWidget(pass_line);

        tel_num_line = new QLineEdit(widget);
        tel_num_line->setObjectName(QStringLiteral("tel_num_line"));

        verticalLayout->addWidget(tel_num_line);

        discode_line = new QLineEdit(widget);
        discode_line->setObjectName(QStringLiteral("discode_line"));

        verticalLayout->addWidget(discode_line);

        register_button = new QPushButton(widget);
        register_button->setObjectName(QStringLiteral("register_button"));

        verticalLayout->addWidget(register_button);


        verticalLayout_2->addLayout(verticalLayout);

        result_line = new QLineEdit(widget);
        result_line->setObjectName(QStringLiteral("result_line"));

        verticalLayout_2->addWidget(result_line);


        retranslateUi(Register_form);

        QMetaObject::connectSlotsByName(Register_form);
    } // setupUi

    void retranslateUi(QWidget *Register_form)
    {
        Register_form->setWindowTitle(QApplication::translate("Register_form", "Form", Q_NULLPTR));
        back_butoon->setText(QApplication::translate("Register_form", "back", Q_NULLPTR));
        username_line->setPlaceholderText(QApplication::translate("Register_form", "username...", Q_NULLPTR));
        pass_line->setPlaceholderText(QApplication::translate("Register_form", "password...", Q_NULLPTR));
        tel_num_line->setPlaceholderText(QApplication::translate("Register_form", "phone number...", Q_NULLPTR));
        discode_line->setPlaceholderText(QApplication::translate("Register_form", "dis code...", Q_NULLPTR));
        register_button->setText(QApplication::translate("Register_form", "register", Q_NULLPTR));
        result_line->setPlaceholderText(QApplication::translate("Register_form", "result...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register_form: public Ui_Register_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_FORM_H
