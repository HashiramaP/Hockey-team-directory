/********************************************************************************
** Form generated from reading UI file 'AJoueur.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUEUR_H
#define UI_AJOUEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AJoueur
{
public:
    QLabel *label;
    QLineEdit *nom;
    QLabel *label_2;
    QLineEdit *Prenom;
    QLabel *label_3;
    QLineEdit *Phone;
    QLabel *label_4;
    QDateEdit *date;
    QLabel *label_5;
    QLineEdit *Position;
    QPushButton *AJOUTER;

    void setupUi(QDialog *AJoueur)
    {
        if (AJoueur->objectName().isEmpty())
            AJoueur->setObjectName(QString::fromUtf8("AJoueur"));
        AJoueur->resize(401, 642);
        label = new QLabel(AJoueur);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(57, 40, 71, 51));
        nom = new QLineEdit(AJoueur);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(180, 40, 191, 41));
        label_2 = new QLabel(AJoueur);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 100, 58, 41));
        Prenom = new QLineEdit(AJoueur);
        Prenom->setObjectName(QString::fromUtf8("Prenom"));
        Prenom->setGeometry(QRect(180, 100, 191, 41));
        label_3 = new QLabel(AJoueur);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 150, 121, 41));
        Phone = new QLineEdit(AJoueur);
        Phone->setObjectName(QString::fromUtf8("Phone"));
        Phone->setGeometry(QRect(180, 160, 201, 41));
        label_4 = new QLabel(AJoueur);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 220, 121, 41));
        date = new QDateEdit(AJoueur);
        date->setObjectName(QString::fromUtf8("date"));
        date->setGeometry(QRect(180, 230, 191, 26));
        label_5 = new QLabel(AJoueur);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 290, 71, 31));
        Position = new QLineEdit(AJoueur);
        Position->setObjectName(QString::fromUtf8("Position"));
        Position->setGeometry(QRect(170, 290, 191, 41));
        AJOUTER = new QPushButton(AJoueur);
        AJOUTER->setObjectName(QString::fromUtf8("AJOUTER"));
        AJOUTER->setGeometry(QRect(150, 410, 90, 28));

        retranslateUi(AJoueur);
        QObject::connect(AJOUTER, SIGNAL(pressed()), AJoueur, SLOT(ajout()));

        QMetaObject::connectSlotsByName(AJoueur);
    } // setupUi

    void retranslateUi(QDialog *AJoueur)
    {
        AJoueur->setWindowTitle(QCoreApplication::translate("AJoueur", "AJoueur", nullptr));
        label->setText(QCoreApplication::translate("AJoueur", "Nom :", nullptr));
        label_2->setText(QCoreApplication::translate("AJoueur", "Prenom", nullptr));
        label_3->setText(QCoreApplication::translate("AJoueur", "Phone Number :", nullptr));
        label_4->setText(QCoreApplication::translate("AJoueur", "Date de Naissance ", nullptr));
        label_5->setText(QCoreApplication::translate("AJoueur", "Position", nullptr));
        AJOUTER->setText(QCoreApplication::translate("AJoueur", "AJOUTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AJoueur: public Ui_AJoueur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUEUR_H
