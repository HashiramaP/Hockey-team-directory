/**
 * File:   Annuaire.h
 * Author: Briton
 */

#ifndef ANNUAIRE_H
#define ANNUAIRE_H
#include <string>
#include<memory>
#include<vector>
#include"Personne.h"
namespace hockey{
class Annuaire
{
public:
  Annuaire (const std::string& p_nomClub);
  Annuaire(const Annuaire& p_annuaire);
  Annuaire& operator=(const Annuaire& autre);
  std::string reqnom() const;
  void ajouterPersonne (const Personne& p_personne);
  std::string reqAnnuaireFormate();
  int compteur() const;
  void supprimerPersonne (const std::string& p_nom, const std::string& p_prenom, const 
util::Date& p_dateDeNaissance); 
private:
  std::string m_nomClub;
  std::vector<std::unique_ptr<Personne>> m_membres;
  void verifieInvariant() const;
  bool PersonneEstDejaPresente(const Personne& p_personne) const;
};
}
#endif /* ANNUAIRE_H */

