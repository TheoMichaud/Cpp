/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tmichaud
 *
 * Created on 11 septembre 2018, 16:22
 */

#include <cstdlib>
#include "Emballage.h"
#include  <iostream>
#include  <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Emballage petitEmballage("XS",1,270,120);
    Emballage *ptEmballage;
    Emballage *moyenEmballage;
    Emballage *grandEmballage;
    
    ptEmballage = new Emballage("Souple",1,200,210,20);
    moyenEmballage = new Emballage("XS a plat",1,270,190);
    grandEmballage = new Emballage("XL",7,383,250,99);
    
    Emballage colis1("XS",7,383,250,99);
    Emballage colis2("L",10,200,100,58);
    
 /*
    cout << "nom du format = " << format << endl;
    cout << "longueur = " << longueur << endl;
    cout << "largeur = " << largeur << endl;
    cout << "hauteur = " << hauteur << endl;
    cout << "resistance = " << resistance << endl;
 */
    cout << setfill('-') << '+' << setw(52) << '+' << endl;
    cout << setfill(' ') << '|' << setw(19) << left << "Format" << '|' << setw(14) << left << "Resistance" << '|' << setw(16)  <<  "Dimensions" << '|'  << endl;
    cout << setfill('-') << setw(52) << '+' << '+' << endl;
    
    
    ptEmballage->Visualiser();
    moyenEmballage->Visualiser();
    grandEmballage->Visualiser();
    
    
    
    cout << setfill('-') << setw(52) << '+' << '+' << endl;
    
    
   
    
     if(colis1 < colis2)
    {
        cout << "Colis1 est le moins volumineux" << endl;
    }
    else
    {
        cout << "Colis2 est le moins volumineux" << endl;
    }
    
    
     delete ptEmballage;
     delete moyenEmballage;
     delete grandEmballage;
     
    return 0;
}

