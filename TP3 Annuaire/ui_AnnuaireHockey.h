/********************************************************************************
** Form generated from reading UI file 'AnnuaireHockey.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNUAIREHOCKEY_H
#define UI_ANNUAIREHOCKEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnnuaireHockey
{
public:
    QAction *actionSupprime_Personne;
    QAction *actionQuitter;
    QAction *actionJoueur;
    QAction *actionEntraineur;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuMENU;
    QMenu *menuAjouter_Personne;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AnnuaireHockey)
    {
        if (AnnuaireHockey->objectName().isEmpty())
            AnnuaireHockey->setObjectName(QString::fromUtf8("AnnuaireHockey"));
        AnnuaireHockey->resize(800, 600);
        actionSupprime_Personne = new QAction(AnnuaireHockey);
        actionSupprime_Personne->setObjectName(QString::fromUtf8("actionSupprime_Personne"));
        actionQuitter = new QAction(AnnuaireHockey);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionJoueur = new QAction(AnnuaireHockey);
        actionJoueur->setObjectName(QString::fromUtf8("actionJoueur"));
        actionEntraineur = new QAction(AnnuaireHockey);
        actionEntraineur->setObjectName(QString::fromUtf8("actionEntraineur"));
        centralwidget = new QWidget(AnnuaireHockey);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 380, 90, 28));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 80, 331, 251));
        AnnuaireHockey->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AnnuaireHockey);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuMENU = new QMenu(menubar);
        menuMENU->setObjectName(QString::fromUtf8("menuMENU"));
        menuAjouter_Personne = new QMenu(menuMENU);
        menuAjouter_Personne->setObjectName(QString::fromUtf8("menuAjouter_Personne"));
        AnnuaireHockey->setMenuBar(menubar);
        statusbar = new QStatusBar(AnnuaireHockey);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AnnuaireHockey->setStatusBar(statusbar);

        menubar->addAction(menuMENU->menuAction());
        menuMENU->addAction(menuAjouter_Personne->menuAction());
        menuMENU->addAction(actionSupprime_Personne);
        menuMENU->addAction(actionQuitter);
        menuAjouter_Personne->addAction(actionJoueur);
        menuAjouter_Personne->addAction(actionEntraineur);

        retranslateUi(AnnuaireHockey);
        QObject::connect(actionQuitter, SIGNAL(triggered()), AnnuaireHockey, SLOT(close()));
        QObject::connect(actionJoueur, SIGNAL(triggered()), AnnuaireHockey, SLOT(dialogJoueur()));
        QObject::connect(pushButton, SIGNAL(pressed()), AnnuaireHockey, SLOT(afficher()));
        QObject::connect(actionEntraineur, SIGNAL(triggered()), AnnuaireHockey, SLOT(dialogEnt()));
        QObject::connect(actionSupprime_Personne, SIGNAL(triggered()), AnnuaireHockey, SLOT(SUPP()));

        QMetaObject::connectSlotsByName(AnnuaireHockey);
    } // setupUi

    void retranslateUi(QMainWindow *AnnuaireHockey)
    {
        AnnuaireHockey->setWindowTitle(QCoreApplication::translate("AnnuaireHockey", "AnnuaireHockey", nullptr));
        actionSupprime_Personne->setText(QCoreApplication::translate("AnnuaireHockey", "Supprime Personne", nullptr));
        actionQuitter->setText(QCoreApplication::translate("AnnuaireHockey", "Quitter", nullptr));
        actionJoueur->setText(QCoreApplication::translate("AnnuaireHockey", "Joueur", nullptr));
        actionEntraineur->setText(QCoreApplication::translate("AnnuaireHockey", "Entraineur", nullptr));
        pushButton->setText(QCoreApplication::translate("AnnuaireHockey", "AFFICHAGE", nullptr));
        menuMENU->setTitle(QCoreApplication::translate("AnnuaireHockey", "MENU", nullptr));
        menuAjouter_Personne->setTitle(QCoreApplication::translate("AnnuaireHockey", "Ajouter Personne", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnnuaireHockey: public Ui_AnnuaireHockey {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNUAIREHOCKEY_H
