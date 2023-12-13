

#ifndef VALIDATIONFORMAT_H
#define VALIDATIONFORMAT_H
#include<string>

bool validerFormatTelephone(const std::string& p_telephone);
bool validerFormatNumRAMQ(const std::string& p_numero, const std::string& p_nom, 
const std::string& p_prenom, int p_jourNaissance, int p_moisNaissance, int 
p_anneeNaissance, char p_sex);
bool validerFormatNom(const std::string &m_nom,const std::string &p_prenom=NULL);
bool validerTelephone(const std::string& p_telephone);
#endif /* VALIDATIONFORMAT_H */

