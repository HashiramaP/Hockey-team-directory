/********************************************************************************
** Form generated from reading UI file 'AjoutEnt.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTENT_H
#define UI_AJOUTENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AjoutEnt
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *nom;
    QLineEdit *Prenom;
    QDateEdit *date;
    QLineEdit *RAMQ;
    QLineEdit *Phone;
    QPushButton *pushButton;
    QLabel *label_6;
    QLineEdit *SEXE;

    void setupUi(QDialog *AjoutEnt)
    {
        if (AjoutEnt->objectName().isEmpty())
            AjoutEnt->setObjectName(QString::fromUtf8("AjoutEnt"));
        AjoutEnt->resize(538, 555);
        label = new QLabel(AjoutEnt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 58, 31));
        label_2 = new QLabel(AjoutEnt);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 80, 58, 41));
        label_3 = new QLabel(AjoutEnt);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 135, 131, 31));
        label_4 = new QLabel(AjoutEnt);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 175, 58, 41));
        label_5 = new QLabel(AjoutEnt);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 220, 161, 41));
        nom = new QLineEdit(AjoutEnt);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(210, 30, 113, 28));
        Prenom = new QLineEdit(AjoutEnt);
        Prenom->setObjectName(QString::fromUtf8("Prenom"));
        Prenom->setGeometry(QRect(210, 90, 113, 28));
        date = new QDateEdit(AjoutEnt);
        date->setObjectName(QString::fromUtf8("date"));
        date->setGeometry(QRect(210, 130, 110, 26));
        RAMQ = new QLineEdit(AjoutEnt);
        RAMQ->setObjectName(QString::fromUtf8("RAMQ"));
        RAMQ->setGeometry(QRect(210, 170, 113, 28));
        Phone = new QLineEdit(AjoutEnt);
        Phone->setObjectName(QString::fromUtf8("Phone"));
        Phone->setGeometry(QRect(210, 220, 113, 28));
        pushButton = new QPushButton(AjoutEnt);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 330, 90, 28));
        label_6 = new QLabel(AjoutEnt);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 270, 111, 51));
        SEXE = new QLineEdit(AjoutEnt);
        SEXE->setObjectName(QString::fromUtf8("SEXE"));
        SEXE->setGeometry(QRect(210, 270, 113, 28));

        retranslateUi(AjoutEnt);
        QObject::connect(pushButton, SIGNAL(pressed()), AjoutEnt, SLOT(ajout()));

        QMetaObject::connectSlotsByName(AjoutEnt);
    } // setupUi

    void retranslateUi(QDialog *AjoutEnt)
    {
        AjoutEnt->setWindowTitle(QCoreApplication::translate("AjoutEnt", "AjoutEnt", nullptr));
        label->setText(QCoreApplication::translate("AjoutEnt", "NOM", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutEnt", "PRENOM", nullptr));
        label_3->setText(QCoreApplication::translate("AjoutEnt", "Date de NAISSANCE ", nullptr));
        label_4->setText(QCoreApplication::translate("AjoutEnt", "RAMQ", nullptr));
        label_5->setText(QCoreApplication::translate("AjoutEnt", "Numero de Telephone", nullptr));
        pushButton->setText(QCoreApplication::translate("AjoutEnt", "AJOUTER", nullptr));
        label_6->setText(QCoreApplication::translate("AjoutEnt", "sexe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutEnt: public Ui_AjoutEnt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTENT_H
