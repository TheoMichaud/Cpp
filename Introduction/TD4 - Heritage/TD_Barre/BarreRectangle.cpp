/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BarreRectangle.cpp
 * Author: tmichaud
 * 
 * Created on 2 octobre 2018, 15:33
 */

#include "BarreRectangle.h"

BarreRectangle::BarreRectangle(const string _nom, const string _reference, const int _longueur, const int _largeur, int _taille) :
Barre(_nom,_reference,_taille),
        longueur(_longueur),
        largeur(_largeur)
{
}





