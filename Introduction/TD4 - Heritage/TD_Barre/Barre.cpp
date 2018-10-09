/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Barre.cpp
 * Author: tmichaud
 * 
 * Created on 2 octobre 2018, 14:48
 */
#include <string>
#include <iostream>
#include "Barre.h"

using namespace std;

void Barre::AfficherCaracteristiques() {
    cout << "nom:" << nom << endl;
    cout << "reference:" << reference << endl;
}

Barre::Barre(const string _nom, const string _reference,const int densite, const int _taille) :
    nom(_nom),
    reference(_reference)
{
}

