/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   newmain.cpp
 * Author: etudiant
 *
 * Created on 4 novembre 2023, 18 h 10
 */

#include <cstdlib>
#include"Date.h"
#include"Personne.h"
#include"ContratException.h"
#include"validationFormat.h"
#include<iostream>

using namespace std;

/*
 * 
 */
int
main (int argc, char** argv)
{
  util::Date d;
  hockey::Personne Briton("","jii",d,"418-678-989");
  string po=Briton.reqPersonneFormate ();
  cout<<po;
  return 0;
}

