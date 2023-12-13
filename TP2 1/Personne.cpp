/**
 * \file Personne.cpp
 * \brief definition des fonctions de la classe Personne
 * \author Briton Muvunyi
 * \param p_prenom
 * \param p_dateNaissance
 * \param p_telephone
 */

#include "Personne.h"
#include"ContratException.h"
#include"validationFormat.h"
#include<sstream>
/**
 * \brief constructeur de la classe avec parametres 
 * \param[in] p_nom
 * \param[in] p_prenom
 * \param[in] p_dateNaissance
 * \param[in] p_telephone
 * \pre p_nom non vide
 * \pre p_prenom non vide
 */

hockey::Personne::Personne (const std::string &p_nom,const std::string &p_prenom,
                            const util::Date &p_dateNaissance,
                            const std::string &p_telephone,const std::string &p_position):m_nom(p_nom),m_prenom(p_prenom),
                            m_dateNaissance(p_dateNaissance.reqJour (),p_dateNaissance.reqMois (),p_dateNaissance.reqAnnee ()),m_telephone(p_telephone)
{
  PRECONDITION(p_dateNaissance.reqAnnee ()>2005);
  PRECONDITION((p_position=="ailier")||(p_position=="centre")||(p_position=="défenseur")||(p_position=="gardien") );
   
//  PRECONDITION(validerFormatNom(p_nom,p_prenom));
//  PRECONDITION(validerFormatTelephone(p_telephone));
//  POSTCONDITION(m_prenom == p_prenom);
//  POSTCONDITION(m_nom== p_nom);
//  POSTCONDITION(m_telephone==p_telephone);
//  POSTCONDITION(m_dateNaissance==p_dateNaissance);
//  INVARIANTS ();
}
/**
 * \brief mutateur pour l'attribut privee m_telephone
 * \param[in] p_telephone
 * \pre p_telephone doit etre valide.
 */
void hockey::Personne::asgtelephone(const std::string &p_telephone)
{
  PRECONDITION(validerTelephone(p_telephone));
  m_telephone=p_telephone;
  POSTCONDITION(m_telephone==p_telephone);
  INVARIANTS ();
}
/**
 *\brief sucharegement de l'operateur ==  pour pouvoir l'utilise dans la  clasee personne
 * \param[in] p_Personne
 * \return boolean
 */
bool hockey::Personne::operator==(const hockey::Personne &p_Personne) const
{
  return (m_nom==p_Personne.reqnom () && m_prenom==p_Personne.reqprenom () && m_dateNaissance==p_Personne.reqdateNaissance ());
}
/**
 * \brief accesseur pour l'attribut prive m_nom
 * \param[out] l'attribut m_nom contenant le nom
 */
const std::string& hockey::Personne::reqnom() const{
  return m_nom;
}
/**
 * \brief accesseur pour l'attribut prive m_prenom
 * \param[out] l'attribut m_prenom contenant le prenom
 */
const std::string& hockey::Personne::reqprenom() const{
    return m_prenom;
  }
/**
 * \brief accesseur pour l'attribut prive m_telephone
 * \param[out] l'attribut m_telephone contenant le telephone
 */
const std::string& hockey::Personne::reqtelephone () const{
  return m_telephone;
}
/**
 * \brief accesseur pour l'attribut prive m_datedeNaissance
 * \param[out] l'attribut m_datedeNaissance contenant le datedeNaissance
 */
const util::Date& hockey::Personne::reqdateNaissance() const{
  return m_dateNaissance;
}
/**
 * \brief fonction qui retourne une chaine de characteur ayant tout les attributs 
 * \param[out] chaine des characteur avec tout les attributs reunit
 */
std::string hockey::Personne::reqPersonneFormate (){
  std::ostringstream os;
  os<<"Nom                :"<<m_nom<<"\n"<<"Prenom             :"
          <<m_prenom<<"\n"
          <<"Date de Naissance  :"<<reqdateNaissance().reqDateFormatee ()<<"\n"
          <<"Telephone          :"<<reqtelephone ();
  INVARIANTS ();
  return os.str ();
}
/**
 * \brief destructeur de la classe Personne avec ces derivees 
 */
hockey::Personne::~Personne () { }
void hockey::Personne::verifieInvariant() const{
    INVARIANT(!(m_nom.empty()));
    INVARIANT(!(m_prenom.empty()));
    INVARIANT(m_dateNaissance.validerDate (m_dateNaissance.reqJour (),m_dateNaissance.reqMois (),m_dateNaissance.reqAnnee ()));
}
