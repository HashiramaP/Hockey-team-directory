/*
 *
 * \file Joueur.h
 * \brief interface de la classe Joueur
 * \param[in] string p_nom
 * \param[in] string prenom
 * \param[in] Date de naissance
 * \param[in] string p_telephone
 * \param[in] string p_position 
 */

#ifndef JOUEUR_H
#define JOUEUR_H
#include"Personne.h"
#include"string"
#include"Date.h"
#include<memory>
namespace hockey{
class Joueur:public Personne
{
public:
  Joueur (const std::string &p_nom,const std::string &p_prenom,
                            const util::Date &p_dateNaissance,
                            const std::string &p_telephone,const std::string& p_position);
  std::string reqposition() const;
  void asgposition(const std::string & p_position);
  std::string reqPersonneFormate() const ;
  std::unique_ptr<Personne> clone ()const override{
  return std::make_unique<Joueur>(*this);}

private:
  std::string m_position;
  void verifieInvariant() const;
};
}
#endif /* JOUEUR_H */

