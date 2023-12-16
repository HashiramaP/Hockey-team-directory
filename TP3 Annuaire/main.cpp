/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/main.cc to edit this template
 */

/*
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on 14 décembre 2023, 00 h 43
 */

#include <QApplication>
#include "AnnuaireHockey.h"

int
main (int argc, char *argv[])
{
  // initialize resources, if needed
  // Q_INIT_RESOURCE(resfile)
  QApplication app (argc, argv);
  AnnuaireHockey FenetrePrincipale;
  FenetrePrincipale.show ();
  // create and show your widgets here

  return app.exec ();
}
