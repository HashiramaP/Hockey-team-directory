/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.cc to edit this template
 */

/*
 * File:   AjoutEnt.cpp
 * Author: etudiant
 *
 * Created on 14 décembre 2023, 05 h 35
 */

#include "AjoutEnt.h"
#include "Date.h"
#include "QMessageBox"
#include "validationFormat.h"
AjoutEnt::AjoutEnt ()
{
  widget.setupUi (this);
}

AjoutEnt::~AjoutEnt () { }
QString AjoutEnt::reqnom() const{
  return widget.nom->text ();
}
QString AjoutEnt::reprenom() const{
  return widget.Prenom->text ();
}
QString AjoutEnt::reqRAMQ() const{
  return widget.RAMQ->text ();
}
QString AjoutEnt::reqphone() const {
  return widget.Phone->text ();
}
QString AjoutEnt::reqSEXE() const{
  return widget.SEXE->text();
}
util::Date AjoutEnt::reqdate() const {
  return m_dateNaissance;
}
void AjoutEnt::ajout(){
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

    if(reqphone().isEmpty ()){
      QString message("Le telephone n'est pasn valide");
      QMessageBox::information(this, "ERREUR", message);
      return;
    }
  util::Date d;
  m_dateNaissance.asgDate(widget.date->date().day(), widget.date->date().month(), widget.date->date().year());
	if (d.reqAnnee ()- m_dateNaissance.reqAnnee ()<18){
		QString message("La date de naissance n’est pas valide");
		QMessageBox::information(this, "ERREUR", message);
		return;
          }
  if(!(validerFormatNumRAMQ(reqRAMQ().toStdString(),reqnom().toStdString(), 
reprenom().toStdString(),  m_dateNaissance.reqJour (), m_dateNaissance.reqMois (), 
 m_dateNaissance.reqAnnee (),reqSEXE().toStdString()[0]))){
      QString message("Le RAMQ est invalide");
      QMessageBox::information(this, "ERREUR", message);
      return;
    }
  accept();
 
}

