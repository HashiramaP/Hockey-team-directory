/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.cc to edit this template
 */

/*
 * File:   Supprime.cpp
 * Author: etudiant
 *
 * Created on 14 décembre 2023, 06 h 57
 */
#include "Date.h"
#include "QMessageBox"
#include "Supprime.h"

Supprime::Supprime ()
{
  widget.setupUi (this);
}

Supprime::~Supprime () { }
QString Supprime::reqnom() const{
  return widget.nom->text ();
}
QString Supprime::reprenom() const{
  return widget.prenom->text ();
}
util::Date Supprime::reqdate() const {
  return m_dateNaissance;
}
void Supprime::supprime(){
  if(reqnom().isEmpty ()){
      QString message("Le nom ne doit pas etre vide");
      QMessageBox::information(this, "ERREUR", message);
      return;
    }
   if(reprenom().isEmpty ()){
      QString message("Le prenom ne doit pas etre vide");
      QMessageBox::information(this, "ERREUR", message);
      return;
    }
   m_dateNaissance.asgDate(widget.date->date().day(), widget.date->date().month(), widget.date->date().year());
    accept();
}