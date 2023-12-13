/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on 8 octobre 2023, 23 h 42
 */

#include <cstdlib>
#include "validationFormat.h"
# include<string>
#include<sstream>
#include<iostream>
#include<cstring>
#include<array>
#include<algorithm>
using namespace std;

/*
 * 
 */
bool validerFormatTelephone(const string& p_telephone)
{
  bool t=true;
  int cc=p_telephone.size();
  istringstream is(p_telephone);
  int v;
  int b;
  int nn;
  char h;
  while(is)
    {
      is>>v;
      is>>h;
      is>>b;
      is>>h;
      is>>nn;
      
    }
   array<int,44>numeroaccepte={204, 431, 226, 249, 289, 343,
                 365, 416, 437, 519, 548, 613,
                 647, 705, 807, 905, 236, 250,
                 604, 778, 403, 587, 780, 825,
                 418, 438, 450, 514, 579, 581,
                 819, 873, 506, 306, 639, 709,
                 867, 782, 902,800, 866, 877, 
                 888, 855};
 for (size_t g=0;g<44;g++)
   { 
     t=false;
     if (v==numeroaccepte[g] || v>900)
       {
         t=true;
         break;
       }
   }
    for(int i=0;i<p_telephone.size();i++)
    {
      if (p_telephone[i]==' ' || isalpha(p_telephone[i]) || p_telephone[3]!='-' || p_telephone[7]!='-'||b>999 || nn>9999 || cc!=12)
        {
          t=false;
        }
    }

  return t;
}
bool validerFormatNumRAMQ(const std::string& p_numero, const std::string& p_nom, 
const std::string& p_prenom, int p_jourNaissance, int p_moisNaissance, int 
p_anneeNaissance, char p_sex)
{
  bool t=true;
  if (p_nom.size()>50 || p_prenom.size()>50)
    {
      t=false;
    }
  if(!strchr("FM0U",p_sex))
    {
      t=false;
    }
  if(p_moisNaissance%2==0 && p_moisNaissance!=2 && p_jourNaissance>31)
    {
      t=false;
    }
  if(p_moisNaissance%2==1 && p_moisNaissance!=2 && p_jourNaissance>30)
    {
      t=false;
    }
  if(p_moisNaissance==2 && p_anneeNaissance%400==0 && p_jourNaissance>29)
    {
      t=false;
    }
  if(p_moisNaissance==2 && p_anneeNaissance%400!=0 && p_jourNaissance>28)
    {
      t=false;
    }
  if (p_moisNaissance>12 || p_anneeNaissance>9999)
    {
      t=false;
    }
  if(p_sex=='F')
    {
      p_moisNaissance+=50;
    }
  istringstream numero(p_numero);
  string b;
  string pnumero;
  while(numero>>b)
    {
    pnumero+=b;
    }
  if(p_nom.substr(0,3)!=pnumero.substr(0,3) || p_prenom[0]!=pnumero[3])
        {
          t=false;
        }
  if (pnumero.size()!=12)
    {
      t=false;
    }
  string anneeNaissance=to_string(p_anneeNaissance);
   if (pnumero[4]!=anneeNaissance[2] || pnumero[5]!=anneeNaissance[3])
    {
      t=false;
    }
  string mois;
  if (p_moisNaissance<10)
    {
      mois="0";
    }
   mois+=to_string(p_moisNaissance);
   if (pnumero[6]!=mois[0] || pnumero[7]!=mois[1])
    {
      t=false;
    }
    string jour;
  if (p_jourNaissance<10)
    {
      jour="0";
    }
   jour+=to_string(p_jourNaissance);
   if (pnumero[8]!=jour[0] || pnumero[9]!=jour[1])
    {
      t=false;
    }
   if (!isdigit(pnumero[10]) || !isdigit(pnumero[11]))
     {
       t=false;
     }
  
  return t;
}
bool validerFormatNom(const string &m_nom,const string &p_prenom){
  bool t=true;
  string s=m_nom;
  s.erase(remove(s.begin(), s.end(), ' '), s.end());
  if (s.empty() || s.empty()){
      t=false;
    }
  return t;
}
bool validerTelephone(const std::string& p_telephone){
  return(validerFormatTelephone(p_telephone));
}