/********************************************************************************
** Form generated from reading UI file 'Ajouterjoueur.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERJOUEUR_H
#define UI_AJOUTERJOUEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Ajouterjoueur
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Ajouterjoueur)
    {
        if (Ajouterjoueur->objectName().isEmpty())
            Ajouterjoueur->setObjectName(QString::fromUtf8("Ajouterjoueur"));
        Ajouterjoueur->resize(400, 300);
        buttonBox = new QDialogButtonBox(Ajouterjoueur);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Ajouterjoueur);
        QObject::connect(buttonBox, SIGNAL(accepted()), Ajouterjoueur, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Ajouterjoueur, SLOT(reject()));

        QMetaObject::connectSlotsByName(Ajouterjoueur);
    } // setupUi

    void retranslateUi(QDialog *Ajouterjoueur)
    {
        Ajouterjoueur->setWindowTitle(QCoreApplication::translate("Ajouterjoueur", "Ajouterjoueur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ajouterjoueur: public Ui_Ajouterjoueur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERJOUEUR_H
