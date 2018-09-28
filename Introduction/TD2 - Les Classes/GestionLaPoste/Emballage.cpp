/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Emballage.cpp
 * Author: tmichaud
 * 
 * Created on 11 septembre 2018, 16:22
 */

#include "Emballage.h"
#include <iostream>
#include  <iomanip>
//#include <string>

using namespace std;

Emballage::Emballage() {
}

Emballage::Emballage(const Emballage& orig) {
}

Emballage::~Emballage() 
{
    cout << "Destructeur /" << format << endl;
}

Emballage::Emballage(string _format, int _resistance, int _longueur, int _largeur, int _hauteur, int _nombreEnStock) :
    format(_format), 
    resistance(_resistance), 
    longueur(_longueur),
    largeur(_largeur), 
    hauteur(_hauteur), 
    nombreEnStock(_nombreEnStock) 
    {
    cout << "Constructeur /" << format << endl;
    }


void Emballage::Visualiser() {
/*
    cout << "nom du format = " << format << endl;
    cout << "longueur = " << longueur << endl;
    cout << "largeur = " << largeur << endl;
    cout << "hauteur = " << hauteur << endl;
    cout << "resistance = " << resistance << endl;
    cout << "nombreEnStock = " << nombreEnStock << endl;*/

    //cout << setfill(' ') << '|' << setw(19) << left<< "Format" << '|' << setw(14) << left << "Resistance" << '|' << setw(5) << left <<  "Dimensions" << '|'  << endl;
    
    
    
    
    if(hauteur == 0){
        
    
    cout << setfill(' ') << '|' << setw(19) << left<< format << '|' << setw(14) << left << resistance << '|' << setw(5) << left <<  longueur << 'x' << setw(10) << largeur   << '|' << endl;
    }
    else{
        cout << setfill(' ') << '|' << setw(19) << left<< format << '|' << setw(14) << left << resistance << '|' << setw(5) << left <<  longueur << 'x' << largeur << setw(5) << left << 'x' << hauteur << '|' << endl;
    }
    
}


float Emballage::CalculerVolume(){
    float volume = 0;
    volume = longueur * largeur * hauteur;   
    return volume;
}


bool Emballage::operator <(const Emballage & autreEmballage){
    return Emballage.CalculerVolume()< autreEmballage.CalculerVolume();
}