/**
 * \file Joueur.cpp
 * \brief implementation de la classe Joueur
 * \param[in] string p_nom
 * \param[in] string prenom
 * \param[in] Date de naissance
 * \param[in] string p_telephone
 * \param[in] string p_position 
 */
#include<memory>
#include "Joueur.h"
#include<string>
#include"ContratException.h"
#include<sstream>
/**
 * \brief implementation de la constructeur de la classe Joueur
 * \param[in] string p_nom
 * \param[in] string prenom
 * \param[in] Date de naissance
 * \param[in] string p_telephone
 * \param[in] string p_position 
 * \pre le joueur doit avoir entre15 et 18 ans 
 * \pre le joueur doit joue dans une position connue
 * \post m_position prends la position  
 */
hockey::Joueur::Joueur (const std::string &p_nom,const std::string &p_prenom,
                            const util::Date &p_dateNaissance,
                            const std::string &p_telephone,const std::string& p_position):Personne(p_nom,p_prenom,p_dateNaissance,p_telephone),m_position(p_position){
  util::Date d;
  PRECONDITION((d.reqAnnee ()-p_dateNaissance.reqAnnee ()<=17)&&(d.reqAnnee ()-p_dateNaissance.reqAnnee ()>=15));
  asgposition(p_position);// la postcondition et l'Invariant sont deja dans la fonctionasgposition
}
/**
 * \brief implementation de la fonction reqposition()
 * \return m_position 
 */
std::string hockey::Joueur::reqposition()const{
  return m_position;
}
/**
 * \brief implementation de la fonction reqPersonneFormate()
 * \return chaine de charactere avec tout les info
 */
std::string hockey::Joueur::reqPersonneFormate() const{
  std::ostringstream os;
  os<<"Nom                :"<<reqnom()<<"\n"<<"Prenom             :"
          <<reqprenom()<<"\n"
          <<"Date de Naissance  :"<<reqdateNaissance().reqDateFormatee ()<<"\n"
          <<"Telephone          :"<<reqtelephone ()<<"\n"
          <<"Position           :"<<reqposition()<<"\n"
          <<"--------------";
  return os.str();
}
/**
 * \brief mutateur de l"attribut m_position
 * \param[in] p_postion 
 * \pre le joueur doit joue dans une position connue
 * \post m_position prends la position  
 */
void hockey::Joueur::asgposition(const std::string & p_position){
   PRECONDITION((p_position=="ailier")||(p_position=="centre")||(p_position=="défenseur")||(p_position=="gardien") );
   m_position=p_position;
   POSTCONDITION(m_position==p_position);
   INVARIANTS();
}
/**
 * \brief Vérifie les invariants de la classe
 * cas valide:L'âge du joueur doit être compris entre 15 et 17 ans.
 * cas valide: La position du joueur doit être l'une des suivantes : "ailier", "centre", "défenseur" ou "gardien".
 */
void hockey::Joueur::verifieInvariant() const{
  util::Date d;
  INVARIANT((d.reqAnnee ()-reqdateNaissance().reqAnnee ()<=17)&&(d.reqAnnee ()-reqdateNaissance().reqAnnee ()>=15));
  INVARIANT((m_position=="ailier")||(m_position=="centre")||(m_position==" défenseur")||(m_position==" gardien") );
  
}
