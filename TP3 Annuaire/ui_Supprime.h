/********************************************************************************
** Form generated from reading UI file 'Supprime.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIME_H
#define UI_SUPPRIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Supprime
{
public:
    QLabel *label;
    QLineEdit *nom;
    QLabel *label_2;
    QLineEdit *prenom;
    QDateEdit *date;
    QLabel *label_3;
    QPushButton *supprime;

    void setupUi(QDialog *Supprime)
    {
        if (Supprime->objectName().isEmpty())
            Supprime->setObjectName(QString::fromUtf8("Supprime"));
        Supprime->resize(400, 300);
        label = new QLabel(Supprime);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 58, 16));
        nom = new QLineEdit(Supprime);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(110, 20, 113, 28));
        label_2 = new QLabel(Supprime);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 58, 16));
        prenom = new QLineEdit(Supprime);
        prenom->setObjectName(QString::fromUtf8("prenom"));
        prenom->setGeometry(QRect(110, 70, 113, 28));
        date = new QDateEdit(Supprime);
        date->setObjectName(QString::fromUtf8("date"));
        date->setGeometry(QRect(120, 130, 110, 26));
        label_3 = new QLabel(Supprime);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 140, 58, 16));
        supprime = new QPushButton(Supprime);
        supprime->setObjectName(QString::fromUtf8("supprime"));
        supprime->setGeometry(QRect(150, 200, 90, 28));

        retranslateUi(Supprime);
        QObject::connect(supprime, SIGNAL(pressed()), Supprime, SLOT(supprime()));

        QMetaObject::connectSlotsByName(Supprime);
    } // setupUi

    void retranslateUi(QDialog *Supprime)
    {
        Supprime->setWindowTitle(QCoreApplication::translate("Supprime", "Supprime", nullptr));
        label->setText(QCoreApplication::translate("Supprime", "NOM :", nullptr));
        label_2->setText(QCoreApplication::translate("Supprime", "PRENOM", nullptr));
        label_3->setText(QCoreApplication::translate("Supprime", "Date ", nullptr));
        supprime->setText(QCoreApplication::translate("Supprime", "SUPPRIME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Supprime: public Ui_Supprime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIME_H
