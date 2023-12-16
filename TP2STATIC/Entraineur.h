/**
 * \file Entraineur.h
 * \brief Declaration de toutes les classe de la classe Entraineur dans le namespace hockey
 * \author Briton Muvunyi
 */
#ifndef ENTRAINEUR_H
#define ENTRAINEUR_H
#include"Personne.h"
#include<string>
#include"Date.h"
namespace hockey{
class Entraineur:public Personne
{
public:
  Entraineur(const std::string &p_nom,const std::string &p_prenom,
            const util::Date &p_dateNaissance,const std::string &p_telephone,const std::string& p_numRAMQ,
            char p_sexe);
  const std::string& reqnumRAMQ() const;
  char reqsexe() const;
  std::string reqPersonneFormate()const ;
  std::unique_ptr<Personne>clone() const override {
  return std::make_unique<Entraineur>(*this);
}
private:
  std::string  m_numRAMQ;
  char m_sexe;
  void verifieInvariant() const;
};
}
#endif /* ENTRAINEUR_H */

