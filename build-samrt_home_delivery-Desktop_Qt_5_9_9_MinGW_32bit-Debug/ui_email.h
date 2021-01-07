/********************************************************************************
** Form generated from reading UI file 'email.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAIL_H
#define UI_EMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_email
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_email;
    QPushButton *envoyermail;
    QTextEdit *message;

    void setupUi(QDialog *email)
    {
        if (email->objectName().isEmpty())
            email->setObjectName(QStringLiteral("email"));
        email->resize(540, 449);
        verticalLayout = new QVBoxLayout(email);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_email = new QLineEdit(email);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit_email);

        envoyermail = new QPushButton(email);
        envoyermail->setObjectName(QStringLiteral("envoyermail"));

        verticalLayout->addWidget(envoyermail);

        message = new QTextEdit(email);
        message->setObjectName(QStringLiteral("message"));

        verticalLayout->addWidget(message);


        retranslateUi(email);

        QMetaObject::connectSlotsByName(email);
    } // setupUi

    void retranslateUi(QDialog *email)
    {
        email->setWindowTitle(QApplication::translate("email", "Dialog", Q_NULLPTR));
        lineEdit_email->setPlaceholderText(QApplication::translate("email", "Tapez l'adresse mail ici", Q_NULLPTR));
        envoyermail->setText(QApplication::translate("email", "Envoyer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class email: public Ui_email {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAIL_H
