/** 
 * File:   Annuaire.cpp
 * \brief definitions des methodes de la classe Annuaire.h
 * Author: Briton
 */
#include "Annuaire.h"
#include<string>
#include"ContratException.h"
#include"validationFormat.h"
#include<sstream>
#include"iostream"
#include "PersonneException.h"
#include <vector>
/**
 * \brief constructeur de la classe 
 * param[in] p_nomClub 
 * pre p_nomClub valide par validepFormatNom 
 * post m_nomClub==p_nomClub
 */
hockey::Annuaire::Annuaire(const std::string& p_nomClub):m_nomClub(p_nomClub){
  PRECONDITION(validerFormatNom(p_nomClub));
  POSTCONDITION(m_nomClub==p_nomClub);
  INVARIANTS();
}
/**
 * \brief accesseur de la classe 
 * return m_nomClub
 */
std::string hockey::Annuaire::reqnom()const{
  return m_nomClub;
}
/**
 * \brief compteur de la classe 
 * return compt
 */
int hockey::Annuaire::compteur() const{
  return m_membres.size();
}
/**
 * \brief Cette méthode permet d’ajouter une personne au vecteur des membres
 */
void hockey::Annuaire::ajouterPersonne (const Personne& p_personne){
  bool t= hockey::Annuaire::PersonneEstDejaPresente(p_personne);
  if (t){
      throw PersonneDejaPresenteException (p_personne.reqPersonneFormate()); 
    }
  m_membres.push_back (p_personne.clone ());
  INVARIANTS();
}
/**
 * \brief Cette méthode retourne dans un objet string le contenu formaté de l’annuaire.
 */
std::string hockey::Annuaire::reqAnnuaireFormate(){
  std::ostringstream os;
  os<<"Club : "<<reqnom()<<"\n"
    <<"---------------------\n";
  for (const auto& element : m_membres)
    {
      os<<element->reqPersonneFormate () <<std::endl;
    }
  return os.str();  
}
/**
 * \brief Constructeur par copie de la classe Annuaire.
 *
 * Ce constructeur crée une copie profonde de l'Annuaire fourni en argument.
 * Il copie le nom du club et les membres individuels de l'Annuaire source.
 *
 * \param p_annuaire L'Annuaire à partir duquel la copie doit être créée.
 *
 * \pre La validation du format du nom est effectuée avant la création de l'instance.
 *      La fonction validerFormatNom(p_annuaire.reqNom()) doit renvoyer true.
 *
 * \post L'Annuaire courant est une copie profonde de l'Annuaire source.
 *       Le nom du club de l'Annuaire courant est égal au nom du club de l'Annuaire source.
 
 */
hockey::Annuaire::Annuaire(const hockey::Annuaire& p_annuaire):m_nomClub(p_annuaire.reqnom()){
  PRECONDITION(validerFormatNom(p_annuaire.reqnom()));
  for(const auto& element :p_annuaire.m_membres){
      m_membres.push_back (element->clone());
    }
  POSTCONDITION(m_nomClub==p_annuaire.reqnom());
  INVARIANTS();
  
}
/**
 * \brief Surcharge de l'opérateur d'assignation pour la classe Annuaire.
 *
 * Cette fonction assigne les valeurs d'un autre Annuaire à l'instance courante.
 * L'opération d'assignation implique la copie des membres du club et de ses membres
 * à partir de l'Annuaire source vers l'Annuaire de destination.
 *
 * \param p_annuaire L'Annuaire source dont les valeurs doivent être copiées.
 * \return Une référence à l'instance courante de l'Annuaire.
 *
 * \post L'Annuaire courant est égal à l'Annuaire source après l'opération d'assignation.
 *       La taille des membres de l'Annuaire courant est égale à la taille des membres
 *       de l'Annuaire source.
 */
hockey::Annuaire& hockey::Annuaire::operator=(const hockey::Annuaire& p_annuaire) {
    if (this != &p_annuaire) { 
        m_nomClub = p_annuaire.reqnom();
        m_membres.clear();
        for (const auto& membre : p_annuaire.m_membres) {
            m_membres.push_back(membre->clone());
        }
    }
    POSTCONDITION(m_membres.size() == p_annuaire.m_membres.size());
    return *this;
}
bool hockey::Annuaire::PersonneEstDejaPresente(const Personne& p_personne) const{
  bool t=false;
  std::vector<std::unique_ptr<Personne>>::const_iterator iter;
  for(iter=m_membres.begin ();iter!=m_membres.end ();iter++){
      if (*(*iter)== p_personne){
          t=true;  
        }
    } 
  return t;
}
void hockey::Annuaire::supprimerPersonne (const std::string& p_nom, const std::string& p_prenom, const 
util::Date& p_dateDeNaissance){
   bool t=false;
  std::vector<std::unique_ptr<Personne>>::iterator iter;
  for(iter=m_membres.begin ();iter!=m_membres.end ();++iter){
      if (((*(*iter)).reqnom()==p_nom )&& ((*(*iter)).reqprenom()==p_prenom )&& ((*(*iter)).reqdateNaissance ()==p_dateDeNaissance)){
          iter=m_membres.erase (iter);
          t=true;  
        }
    }
  if (!t)
    throw PersonneAbsenteException("La personne n'est pas dans l'annuaire");
  
} 
/**
 * \brief Vérifie l'invariant de la classe Annuaire.
 * 
 * Cette fonction vérifie un invariant pour s'assurer que la classe Annuaire est dans un état cohérent.
 * L'invariant vérifié concerne le format du nom du club.
 * 
 */
void hockey::Annuaire::verifieInvariant() const{
  INVARIANT(validerFormatNom(m_nomClub));
}
