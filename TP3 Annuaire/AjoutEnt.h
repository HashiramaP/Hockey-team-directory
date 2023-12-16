/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.h to edit this template
 */

/* 
 * File:   AjoutEnt.h
 * Author: etudiant
 *
 * Created on 14 décembre 2023, 05 h 35
 */

#ifndef _AJOUTENT_H
#define _AJOUTENT_H

#include "ui_AjoutEnt.h"
#include "Date.h"

class AjoutEnt : public QDialog
{
  Q_OBJECT
public:
  AjoutEnt ();
  virtual ~AjoutEnt ();
  QString reqnom() const;
  QString reprenom() const;
  QString reqRAMQ() const;
  QString reqphone() const ;
  util::Date reqdate() const ;
  QString reqSEXE() const ;
  private slots:
    void ajout();
private:
  Ui::AjoutEnt widget;
   util::Date  m_dateNaissance;
};

#endif /* _AJOUTENT_H */
