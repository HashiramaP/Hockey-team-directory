/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.cc to edit this template
 */

/*
 * File:   AnnuaireHockey.cpp
 * Author: etudiant
 *
 * Created on 14 décembre 2023, 00 h 46
 */

#include <qt5/QtWidgets/qwidget.h>
#include <qt5/QtWidgets/qdialog.h>

#include "AnnuaireHockey.h"
#include "AJoueur.h"
#include "Joueur.h"
#include "QMessageBox"
#include "ContratException.h"
#include "PersonneException.h"
#include "iostream"
#include "Date.h"
#include "AjoutEnt.h"
#include "Entraineur.h"
#include "Supprime.h"
AnnuaireHockey::AnnuaireHockey ():Briton("Mapleleaf")
{
  widget.setupUi (this);
}

AnnuaireHockey::~AnnuaireHockey () { }

void AnnuaireHockey::dialogJoueur(){
  AJoueur AjouteJ;
  if(AjouteJ.exec ()){
       try{
           
  //hockey::Joueur Briton("BONNEAU","JEAN",t,"514-369-9874","ailier");
           
      hockey::Joueur Bri(AjouteJ.reqnom().toStdString(),
                              AjouteJ.reprenom().toStdString(),AjouteJ.reqdate(),AjouteJ.reqphone().toStdString(),
                              AjouteJ.reqposition().toStdString());
      Briton.ajouterPersonne (Bri);
         }
      catch(const ContratException & e){
         QString message("Les entree du joueur ne sont  pas valide");
		QMessageBox::information(this, "ERREUR", message);
		return;
          }
       catch(const PersonneDejaPresenteException& e){
          QString message(e.what ());
		QMessageBox::information(this, "ERREUR", message);
		return; 
         }
        catch(const PersonneAbsenteException& e){
          QString message(e.what ());
		QMessageBox::information(this, "ERREUR", message);
		return; 
         }
    
    }}
void AnnuaireHockey::afficher(){
  widget.textEdit->setText (Briton.reqAnnuaireFormate ().c_str());
}
void AnnuaireHockey::dialogEnt(){
  AjoutEnt Ent;
  if (Ent.exec ()){
    try{
           
  
           
      hockey::Entraineur Bri(Ent.reqnom().toStdString(),
                              Ent.reprenom().toStdString(),Ent.reqdate(),Ent.reqphone().toStdString(),
                              Ent.reqRAMQ().toStdString(),Ent.reqSEXE ().toStdString()[0]);
      Briton.ajouterPersonne (Bri);
         }
      catch(const ContratException & e){
         QString message("Les entree du joueur ne sont  pas valide");
		QMessageBox::information(this, "ERREUR", message);
		return;
          }
       catch(const PersonneDejaPresenteException& e){
          QString message(e.what ());
		QMessageBox::information(this, "ERREUR", message);
		return; 
         }
        
    
    }}
void AnnuaireHockey::SUPP(){
  Supprime supp;
  if(supp.exec()){
      try{
      Briton.supprimerPersonne (supp.reqnom().toStdString(),
                              supp.reprenom().toStdString(),supp.reqdate());
    }
      catch(const PersonneAbsenteException& e){
          QString message(e.what ());
		QMessageBox::information(this, "ERREUR", message);
		return; 
         }
    }}