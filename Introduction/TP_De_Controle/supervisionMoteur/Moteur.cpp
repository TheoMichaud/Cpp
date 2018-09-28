/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Moteur.cpp
 * Author: tmichaud
 * 
 * Created on 25 septembre 2018, 14:13
 */

#include "Moteur.h"
#include <iostream>
#include  <iomanip>

using namespace std;

Moteur::Moteur(int _vitesseMax) 
{
    vitesseMax = _vitesseMax;
    vitesse = 0;
}
Moteur::~Moteur() 
{
    vitesse = 0;
}
void Moteur::Demarrer(int _consigneDepart)
{
    vitesse = _consigneDepart;
}
void Moteur::Arreter()
{
    vitesse = 0;
}
void Moteur::Accelerer(int _increment)
{
    vitesse += _increment;
    //if(vitesse + _increment > vitesseMax)
}
void Moteur::Ralentir(int _decrement)
{
    vitesse -=_decrement;
    //if(vitesse + _increment < 0)
}
int Moteur::ObtenirVitesse()
{
   
    return vitesse; 
}


















void Moteur::Afficher()
{
    int choix;
    
    
    
    cout << "Supervision du moteur" << endl;
    cout << "Vitesse du moteur : " << vitesse << endl;    
    
    cout << setfill('-') << '+' << setw(4) << '+' << setw(27) << '-' << '+' << endl;
    cout << setfill(' ') << '|' << setw(2) << '0' << setw(2) << '|' << " Changer consigne vitesse" << setw(3) << '|' << endl;
    cout << setfill(' ') << '|' << setw(2) << '1' << setw(2) << '|' << " Demarrer" << setw(19) << '|' << endl;
    cout << setfill(' ') << '|' << setw(2) << '2' << setw(2) << '|' << " Arreter" << setw(20) << '|' << endl;
    cout << setfill(' ') << '|' << setw(2) << '3' << setw(2) << '|' << " Accelerer" << setw(18) << '|' << endl;
    cout << setfill(' ') << '|' << setw(2) << '4' << setw(2) << '|' << " Ralentir" << setw(19) << '|' << endl;
    cout << setfill(' ') << '|' << setw(2) << '5' << setw(2) << '|' << " Fin du programme" << setw(11) << '|' << endl;
    cout << setfill('-') << '+' << setw(4) << '+' << setw(27) << '-' << '+' << endl;    
    
    cout << "Votre choix : " << endl; 
    
    
    
    
    
    
 
}