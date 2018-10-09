/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BarreRectangle.h
 * Author: tmichaud
 *
 * Created on 2 octobre 2018, 15:33
 */
#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "Barre.h"
#include <string>


using namespace std;

class BarreRectangle:public Barre
{
public:
    BarreRectangle(const string _nom, const string _reference,const int _longueur,const int _largeur, int _taille=200);
    int CalculerSection();
    float CalculerMasse();
    
private:
    int longueur;
    int largeur;
};

#endif

