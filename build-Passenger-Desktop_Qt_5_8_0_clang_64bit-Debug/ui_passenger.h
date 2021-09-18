/********************************************************************************
** Form generated from reading UI file 'passenger.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSENGER_H
#define UI_PASSENGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Passenger
{
public:
    QWidget *centralWidget;
    QLabel *welcome_label;
    QLabel *version_label;
    QLineEdit *result_line;
    QLabel *pic_label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *dont_signup_label;
    QPushButton *signup_page_button;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *username_line;
    QLineEdit *pass_line;
    QPushButton *login_button;

    void setupUi(QMainWindow *Passenger)
    {
        if (Passenger->objectName().isEmpty())
            Passenger->setObjectName(QStringLiteral("Passenger"));
        Passenger->resize(447, 364);
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
        Passenger->setPalette(palette);
        centralWidget = new QWidget(Passenger);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        welcome_label = new QLabel(centralWidget);
        welcome_label->setObjectName(QStringLiteral("welcome_label"));
        welcome_label->setGeometry(QRect(140, 10, 164, 28));
        QFont font;
        font.setFamily(QStringLiteral("Papyrus"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        welcome_label->setFont(font);
        version_label = new QLabel(centralWidget);
        version_label->setObjectName(QStringLiteral("version_label"));
        version_label->setGeometry(QRect(160, 350, 111, 16));
        result_line = new QLineEdit(centralWidget);
        result_line->setObjectName(QStringLiteral("result_line"));
        result_line->setEnabled(false);
        result_line->setGeometry(QRect(150, 250, 141, 21));
        pic_label = new QLabel(centralWidget);
        pic_label->setObjectName(QStringLiteral("pic_label"));
        pic_label->setGeometry(QRect(110, 40, 231, 101));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 290, 354, 34));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        dont_signup_label = new QLabel(layoutWidget);
        dont_signup_label->setObjectName(QStringLiteral("dont_signup_label"));

        horizontalLayout->addWidget(dont_signup_label);

        signup_page_button = new QPushButton(layoutWidget);
        signup_page_button->setObjectName(QStringLiteral("signup_page_button"));
        signup_page_button->setStyleSheet(QStringLiteral(""));
        signup_page_button->setAutoRepeatInterval(101);
        signup_page_button->setFlat(false);

        horizontalLayout->addWidget(signup_page_button);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(150, 150, 137, 89));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        username_line = new QLineEdit(layoutWidget1);
        username_line->setObjectName(QStringLiteral("username_line"));
        username_line->setAutoFillBackground(false);

        verticalLayout->addWidget(username_line);

        pass_line = new QLineEdit(layoutWidget1);
        pass_line->setObjectName(QStringLiteral("pass_line"));
        pass_line->setAutoFillBackground(false);

        verticalLayout->addWidget(pass_line);

        login_button = new QPushButton(layoutWidget1);
        login_button->setObjectName(QStringLiteral("login_button"));

        verticalLayout->addWidget(login_button);

        Passenger->setCentralWidget(centralWidget);

        retranslateUi(Passenger);
        QObject::connect(pic_label, SIGNAL(linkActivated(QString)), pic_label, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(Passenger);
    } // setupUi

    void retranslateUi(QMainWindow *Passenger)
    {
        Passenger->setWindowTitle(QApplication::translate("Passenger", "Passenger", Q_NULLPTR));
        welcome_label->setText(QApplication::translate("Passenger", "Welcome to taxiare...", Q_NULLPTR));
        version_label->setText(QApplication::translate("Passenger", "Passenger version", Q_NULLPTR));
        result_line->setText(QString());
        result_line->setPlaceholderText(QApplication::translate("Passenger", "result...", Q_NULLPTR));
        pic_label->setText(QString());
        dont_signup_label->setText(QApplication::translate("Passenger", "do you have account? if you don't, please", Q_NULLPTR));
        signup_page_button->setText(QApplication::translate("Passenger", "signup.", Q_NULLPTR));
        username_line->setPlaceholderText(QApplication::translate("Passenger", "username...", Q_NULLPTR));
        pass_line->setPlaceholderText(QApplication::translate("Passenger", "password...", Q_NULLPTR));
        login_button->setText(QApplication::translate("Passenger", "login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Passenger: public Ui_Passenger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSENGER_H
