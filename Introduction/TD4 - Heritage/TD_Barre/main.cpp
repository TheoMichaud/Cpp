/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tmichaud
 *
 * Created on 2 octobre 2018, 14:18
 */


#include <cstdlib>
#include "Barre.h"
#include "BarreRonde.h"
#include "BarreRectangle.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Barre barre1("normal","fff",200);
    barre1.AfficherCaracteristiques();
    
    
    BarreRonde barre2("rond","vvv",200);
    barre2.AfficherCaracteristiques();
    
    BarreRectangle barre3("rectangle","rec1",10,25,200);
    barre3.AfficherCaracteristiques();
            
            
    return 0;
}

