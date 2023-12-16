/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.cc to edit this template
 */

/*
 * File:   AJoueur.cpp
 * Author: etudiant
 *
 * Created on 14 décembre 2023, 01 h 52
 */

#include "AJoueur.h"
#include "QMessageBox"
#include "Personne.h"
#include "Date.h"
AJoueur::AJoueur ()
{
  widget.setupUi (this);
}

AJoueur::~AJoueur () { }
QString AJoueur::reqnom() const{
  return widget.nom->text ();
}
QString AJoueur::reprenom() const{
  return widget.Prenom->text ();
}
QString AJoueur::reqposition() const{
  return widget.Position->text ();
}
QString AJoueur::reqphone() const {
  return widget.Phone->text ();
}
util::Date AJoueur::reqdate() const {
  return m_dateNaissance;
}
void AJoueur::ajout(){
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
   if(reqposition().isEmpty ()|| (reqposition()!="ailier"&&(reqposition()!="centre")&&(reqposition()!="défenseur")&&(reqposition()!="gardien") )){
      QString message("Le position est invalide");
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
	if ((d.reqAnnee ()- m_dateNaissance.reqAnnee ()>17)||(d.reqAnnee ()-m_dateNaissance.reqAnnee ()<15)){
		QString message("La date de naissance n’est pas valide");
		QMessageBox::information(this, "ERREUR", message);
		return;
          }
  accept();
 
}
