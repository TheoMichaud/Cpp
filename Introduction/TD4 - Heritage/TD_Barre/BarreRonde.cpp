/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BarreRonde.cpp
 * Author: tmichaud
 * 
 * Created on 2 octobre 2018, 15:03
 */

#include "BarreRonde.h"
#include <cmath>

using namespace std;

BarreRonde::BarreRonde(const string _nom, const string _reference, const int _densite,const int _diametre, const int _taille):
    Barre(_nom,_reference,_densite,_taille),
    diametre(_diametre)
{
}

int BarreRonde::CalculerSection()
{
    int res;
    res=M_PI*(diametre*diametre)/4;
    return res;
}
float BarreRonde::CalculerMasse()
{
    float res;
    res=taille*(M_PI*(diametre*diametre)/4)*densite;
    return res;
}



