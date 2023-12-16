/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.h to edit this template
 */

/* 
 * File:   AnnuaireHockey.h
 * Author: etudiant
 *
 * Created on 14 décembre 2023, 00 h 46
 */

#ifndef _ANNUAIREHOCKEY_H
#define _ANNUAIREHOCKEY_H

#include "ui_AnnuaireHockey.h"
#include "Annuaire.h"
class AnnuaireHockey : public QMainWindow
{
  Q_OBJECT
public:
  AnnuaireHockey ();
  virtual ~AnnuaireHockey ();
  hockey::Annuaire reqannuaire () const;
  private slots:
    void dialogJoueur();
  private slots:
      void afficher();
  private slots:
    void dialogEnt();
  private slots:
    void SUPP(); 
private:
  Ui::AnnuaireHockey widget;
  hockey::Annuaire Briton;
};

#endif /* _ANNUAIREHOCKEY_H */
