/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.h to edit this template
 */

/* 
 * File:   AJoueur.h
 * Author: etudiant
 *
 * Created on 14 décembre 2023, 01 h 52
 */

#ifndef _AJOUEUR_H
#define _AJOUEUR_H

#include "ui_AJoueur.h"
#include "Date.h"

class AJoueur : public QDialog
{
  Q_OBJECT
public:
  AJoueur ();
  virtual ~AJoueur ();
  QString reqnom() const;
  QString reprenom() const;
  QString reqposition() const;
  QString reqphone() const ;
  util::Date reqdate() const ;
  private slots:
    void ajout();
private:
  Ui::AJoueur widget;
  util::Date  m_dateNaissance;
};

#endif /* _AJOUEUR_H */
