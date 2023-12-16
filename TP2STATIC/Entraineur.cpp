/**
 * \file Entraineur.cpp
 * \brief implementation de la classe Entraineur
 * \param[in] string p_nom
 * \param[in] string prenom
 * \param[in] Date de naissance
 * \param[in] string p_telephone
 * \param[in] string p_numRAMQ
 * \param[in] char p_sexe 
 */

#include "Entraineur.h"
#include<memory>
#include "ContratException.h"
#include <string>
#include<sstream>
#include"validationFormat.h"
/**
 * \brief constructeur de la classe Entraineur
 * \param[in] string p_nom
 * \param[in] string prenom
 * \param[in] Date de naissance
 * \param[in] string p_telephone
 * \param[in] string p_numRAMQ
 * \param[in] char p_sexe 
 * \pre l'Entraineur a moins de 18 ans
 * \pre format de numeroRAMQ eronee
 * \post m_numRAMQ== P_NUMRAMQ
 * \post m_sexe==p_sexe
 */
hockey::Entraineur::Entraineur (const std::string &p_nom,const std::string &p_prenom,
            const util::Date &p_dateNaissance,const std::string &p_telephone,const std::string& p_numRAMQ,
            char p_sexe):Personne(p_nom,p_prenom,p_dateNaissance,p_telephone),m_numRAMQ(p_numRAMQ),m_sexe(p_sexe) 
{
  util::Date d;
  PRECONDITION((d.reqAnnee ()-p_dateNaissance.reqAnnee ()>=18));
  PRECONDITION(validerFormatNumRAMQ(p_numRAMQ,p_nom,p_prenom,p_dateNaissance.reqJour (),p_dateNaissance.reqMois(),p_dateNaissance.reqAnnee(),p_sexe));
  PRECONDITION(p_sexe=='M'||p_sexe=='F');
  POSTCONDITION(m_numRAMQ==p_numRAMQ);
  POSTCONDITION(m_sexe==p_sexe);
  INVARIANTS();
  
}
/**
 * \brief acceseur pour numero RAMQ
 * \return m_numRAMQ
 */
const std::string& hockey::Entraineur::reqnumRAMQ() const{
   return m_numRAMQ;
 }
/**
 * \brief acceseur pour le char sexe
 * \return m_sexe
 */
char  hockey::Entraineur::reqsexe() const{
  return m_sexe;
}
/**
 * \brief formatage pour affiche les attribut en string de l'entraineur
 * \return chaine des charactere
 
 */
std::string hockey::Entraineur::reqPersonneFormate() const{
 std::ostringstream os;
  os<<"Nom                :"<<reqnom()<<"\n"<<"Prenom             :"
          <<reqprenom()<<"\n"
          <<"Date de Naissance  :"<<reqdateNaissance().reqDateFormatee ()<<"\n"
          <<"Telephone          :"<<reqtelephone ()<<"\n"
          <<"Numero de RAMQ     :"<<reqnumRAMQ()<<"\n"
          <<"--------------------";
  INVARIANTS ();
  return os.str();
}

/**
 * \brief Vérifie les invariants de la classe
 * CAS VALIDE: il doit etre majeur et son RAMQ valide et le sexe doit etre M ou F
 */
void hockey::Entraineur::verifieInvariant() const{
  util::Date d;
   INVARIANT((d.reqAnnee ()-reqdateNaissance().reqAnnee ()>=18));
   INVARIANT((validerFormatNumRAMQ(reqnumRAMQ(),reqnom(),reqprenom(),reqdateNaissance().reqJour(),reqdateNaissance().reqMois(),reqdateNaissance().reqAnnee(),m_sexe)));
   INVARIANT(m_sexe=='M'||m_sexe=='F');
}