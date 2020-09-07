/**
 * \file main.cpp
 * \brief Définition de la classe MyWindow
 * \author Romain / Irfan / Clément
 *
 * La classe MyWindow qui sert d'affiche général pour toute notre
 *
 **/

//!\mainpage Projet Poo - Groupe 1
//!
//!\section intro_section Présentation
//! Un logiciel permettant la création de divers formes et d'interagir avec.
//!\section how_to_use Comment l'utiliser ?
//! Lancer Formes.exe pour lancer l'application suite à une compilation
//!\section how_to_compile Pour compiler cela ce fait de deux manières, suivant votre OS (Windows ou Unix).
//!\subsection para_compiler Pour compiler : 
//!		Windows : - Une fois dans votre invité de commande avec le chemin d'accès dans le bon fichier
//!		faite la commande suivante : "mingw32-make -f makefile.win" ou "make.bat"
//!			avec cette commande, le programme va compiler les fichiers et créer l'exécutable nommé Formes.
//!			
//!		Unix : - Avec l'OS Unix, la commande que vous devrez faire dans votre terminal est la suivante :
//!		 "make", avec cette commande, le programme va compiler les fichiers et créer l'exécutable nommé Formes.
//!\section thank_you Merci d'avoir lu !
//!\section author_section Liste des auteurs
//! BOUHENAF Irfan, TRONC Clément, MOLINA Romain


// main.cpp
#include <iostream>

using namespace std;

#include "ez-draw++.hpp"
#include "MyWindow.hpp"

int main()
{
 EZDraw ezDraw;
 MyWindow myWindow(800,500,"Des formes");

 ezDraw.mainLoop();

 return 0;
}
