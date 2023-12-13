/**
 * \file Personne.h
 * \brief Declaration de toutes les classe de la classe Personne dans le namespace hockey
 * \author Briton Muvunyi
 */
#ifndef PERSONNE_H
#define PERSONNE_H
#include<string>
#include"Date.h"
#include <memory>
namespace hockey{
  /**
   * \class Personne
   * \brief une classe ayant des attributs pour cree une personne 
   * \invariant de la classe le nom et le prenom ne doivent pas etre vide.
   */
class Personne
{
public:
  Personne (const std::string &p_nom,const std::string &p_prenom,
            const util::Date &p_dateNaissance,
            const std::string &p_telephone,const std::string &p_position);
  const std::string& reqnom() const;
  const std::string& reqprenom() const;
  const util::Date& reqdateNaissance() const;
  const std::string& reqtelephone() const;
  void asgtelephone(const std::string &p_telephone);
  bool operator==(const hockey::Personne &p_Personne) const;
  virtual ~Personne ();
  std::unique_ptr<Personne> clone ()const;
  std::string reqPersonneFormate (); 
private:
  std::string m_nom;
  std::string m_prenom;
  util::Date m_dateNaissance;
  std::string m_telephone;
  void verifieInvariant() const;
};
}

#endif /* PERSONNE_H */

