/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BarreRonde.h
 * Author: tmichaud
 *
 * Created on 2 octobre 2018, 15:03
 */

#ifndef BARRERONDE_H
#define BARRERONDE_H
#include <string>
#include <iostream>
#include "Barre.h"

using namespace std;

class BarreRonde : public Barre{
public:
    BarreRonde(const string _nom, const string _reference,const int _densite, const int _diametre, int _taille=200);
   
    int CalculerSection();
    float CalculerMasse();
private:
    int diametre;

};

#endif /* BARRERONDE_H */

