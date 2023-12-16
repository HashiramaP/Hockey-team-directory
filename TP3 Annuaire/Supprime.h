/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.h to edit this template
 */

/* 
 * File:   Supprime.h
 * Author: etudiant
 *
 * Created on 14 décembre 2023, 06 h 57
 */

#ifndef _SUPPRIME_H
#define _SUPPRIME_H

#include "ui_Supprime.h"
#include "Date.h"

class Supprime : public QDialog
{
  Q_OBJECT
public:
  Supprime ();
  virtual ~Supprime ();
  QString reqnom() const;
  QString reprenom() const;
  util::Date reqdate() const ;
  private slots:
    void supprime();
private:
  Ui::Supprime widget;
  util::Date  m_dateNaissance;
};

#endif /* _SUPPRIME_H */
