/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Moteur.h
 * Author: tmichaud
 *
 * Created on 25 septembre 2018, 14:13
 */

#ifndef MOTEUR_H
#define MOTEUR_H

#include <string>
#include <fstream>
#include <iostream> //cout, C
#include <iomanip>
#include <limits>
#include <algorithm>
#include <stdlib.h>


using namespace std;


class Moteur 
{
public:
    Moteur(const int _vitesseMax);
    virtual ~Moteur();
    void Accelerer(int _increment);
    void Ralentir(int _decrement);
    void Arreter();
    void Demarrer(int _consigneDepart);
    int ObtenirVitesse();
    
    void Afficher();
    
private:
    int vitesse;
    int vitesseMax;
};

#endif /* MOTEUR_H */




/*************************************/
