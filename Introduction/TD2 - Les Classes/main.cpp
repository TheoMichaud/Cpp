/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kleca
 *
 * Created on 25 septembre 2018, 14:10
 */

#include "Moteur.h"
#include "menu.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    
    
    Moteur moteur(10000);
    int vitesseMoteur = moteur.ObtenirVitesse();
    int choix = 0;
    int consigne = 200;
    int cpt = 5;
    int demarre = 0;
    
    /*
    moteur.Demarrer(200);
    vitesseMoteur = moteur.ObtenirVitesse();
    cout << "La vitesse du moteur après démarrage est de " << vitesseMoteur << " TRS/min." << endl;
    moteur.Arreter();
    vitesseMoteur = moteur.ObtenirVitesse();
    cout << "La vitesse du moteur après arrêt est de " << vitesseMoteur << " TRS/min." << endl;
    */
    
    Menu menu("MonMenu.txt");
    
    while(choix != 5){
        
        if(demarre == 1){
            choix = menu.Afficher(consigne);
        }
        else{
            choix = menu.Afficher(consigne);
        }
        
        switch(choix){
            case 0 : cout << "Nouvelle consigne vitesse : ";
                     cin >> consigne; break;
            case 1 : moteur.Demarrer(consigne); demarre = 1; break;
            case 2 : moteur.Arreter(); break;
            case 3 : cout << "Acceleration de : ";
                     cin >> cpt;
                     moteur.Accelerer(cpt); break;
            case 4 : cout << "Ralentir de : ";
                     cin >> cpt;
                     moteur.Ralentir(cpt); break;
            case 5 : moteur.~Moteur();
        }
        
    }
    
    return 0;
}

