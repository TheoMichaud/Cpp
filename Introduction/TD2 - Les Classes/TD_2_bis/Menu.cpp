/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Menu.cpp
 * Author: tmichaud
 * 
 * Created on 24 septembre 2018, 14:33
 */

#include "Menu.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <iterator>
#include <algorithm>


Menu::Menu() {
        
}

Menu::Menu(const Menu& orig) {
}

Menu::~Menu() {
}

Menu::Menu(string _nomDuFichier):
{
    ifstream fichier(nomDuFichier.c_str());
    if(fichier.good())
    {
        nbLignes = count(istreambuf_iterator<char>(fichier), istreambuf_iterator<char>(), '\n');
        fichier.seekg(0,ios::beg);
        options = (string*)malloc(sizeof(string));
    }
    else{
    
        cout << "pb ouverture fichier" << endl;
    }
}

