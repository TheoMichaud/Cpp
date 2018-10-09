/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Barre.h
 * Author: tmichaud
 *
 * Created on 2 octobre 2018, 14:48
 */

#ifndef BARRE_H
#define BARRE_H
#include <string>
#include <iostream>

using namespace std;

class Barre {
public:
    Barre(const string _nom, const string _reference,const int densite, const int _taille = 200);
    void AfficherCaracteristiques();
private:
    string nom;
    string reference;
protected:
    int taille;
    int densite;
};

#endif /* BARRE_H */

