/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tmichaud
 *
 * Created on 25 septembre 2018, 14:12
 */

#include <cstdlib>
#include "Moteur.h"
#include  <iostream>
#include  <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    /*
    Moteur moteur(2000);
    moteur.Demarrer(200);
    int Moteur_vitesse = moteur.ObtenirVitesse();
    
    //moteur.Demarrer(200);
    
    cout << "La vitesse après avoir démarré le moteur est de " << Moteur_vitesse << endl;
    
    moteur.Arreter();
    Moteur_vitesse = moteur.ObtenirVitesse();
    
    cout << "La vitesse après avoir arrété le moteur est de " << Moteur_vitesse << endl;    
   */
    
    
    
    int choix = 0;
    Moteur moteur(2000);
    
    moteur.Afficher();
    
    cin >> choix;
    
   // while(choix !=5){
    
     switch(choix){
          case 0 : cout << "Vous avez choisi de changer la consigne vitesse";
            
          case 1 : cout << "Vous avez choisi de demarrer";
         
          case 2 : cout << "Vous avez choisi d'arreter";
          
          case 3 : cout << "Vous avez choisi d'accelerer";
         
          case 4 : cout << "Vous avez choisi de ralentir";
          
          case 5 : cout << "FIN DU PROGRAMME";
    
     }
    
    
    
    return 0;
}

 