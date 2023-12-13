

#include <stdlib.h>
#include <iostream>
#include<gtest/gtest.h>
#include"Personne.h"
#include"Date.h"
#include<cstring>


/*
 * \brief test unitaire pour le constructeur avec des attributs 
           les cas non valide :nom ou prenon qui sont vide ou des telephone incomplet
 */

TEST(Personne,constructeurpardefault){
  util::Date t;
  hockey::Personne Briton("Briton","Muvunyi",t,"418-543-678");;
  EXPECT_STREQ("418-543-678",Briton.reqtelephone ().c_str());
  EXPECT_STRNE("",Briton.reqnom ().c_str());;;;;
  EXPECT_STRNE("",Briton.reqprenom ().c_str());
}
/**
 * \brief test unitaire pour le fonction asgtelephone()
          cas non-valide:format invalide de telephone 
 */
TEST(Personne,mutateur){
  util::Date t;
  hockey::Personne Briton("jjj","jjjj",t,"418-543-678");
  Briton.asgtelephone ("418-678-555");
  EXPECT_STREQ("418-678-555",Briton.reqtelephone ().c_str());
}
/**
 * \brief test unitaire pour le fonction reqnom
          cas invalide:le variable p_nom est different du le retour de la fonction
 */
TEST(Personne,ACCESSEURNOM){
  util::Date t;
  hockey::Personne Briton("jjj","jjjj",t,"418-543-678");
 EXPECT_STREQ("jjj",Briton.reqnom ().c_str());
}
/**
 * \brief test unitaire pour le fonction reqprenom
          cas invalide:le variable p_prenom est different du le retour de la fonction
 */
TEST(Personne,ACCESSEURpreNOM){
  util::Date t;
  hockey::Personne Briton("jjj","jjjj",t,"418-543-678");
  EXPECT_STREQ("jjjj",Briton.reqprenom ().c_str());
}
/**
 * \brief test unitaire pour le fonction reqtelephone
          cas invalide:le variable p_telephone est different du le retour de la fonction
 */
TEST(Personne,ACCESSEURtelephone){
  util::Date t;
  hockey::Personne Briton("jjj","jjjj",t,"418-543-678");
  EXPECT_STREQ("418-543-678",Briton.reqtelephone ().c_str());
}
/**
 * \brief test unitaire pour le fonction reqdatedenaissance
          cas invalide:le variable p_datedenaissance est different du le retour de la fonction
 */
TEST(Personne,Accesseurdatedenaissance){
  util::Date t;
  hockey::Personne Briton("jjj","jjjj",t,"418-543-678");
  EXPECT_STREQ("Dimanche le 05 novembre 2023",Briton.reqdateNaissance ().reqDateFormatee ().c_str());
}
/**
 * \brief test unitaire pour le fonction reqPersonneFormate ()
          cas invalide:le string on veut sortir est different du retour de la fonction
 */
TEST(Personne,stringpersonne){
  util::Date t(12,05,1979);
  hockey::Personne Briton("LOUIS","JEAN",t,"418-656-2131");
  EXPECT_STREQ("Nom                :LOUIS\n"
               "Prenom             :JEAN\n"
               "Date de Naissance  :Samedi le 12 mai 1979\n"
               "Telephone          :418-656-2131",Briton.reqPersonneFormate ().c_str());
}

