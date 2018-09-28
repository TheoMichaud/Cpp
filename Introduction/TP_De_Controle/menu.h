#ifndef MENU_H
#define MENU_H

#include <string>
#include <fstream>
#include <iostream> //cout, C
#include <iomanip>
#include <limits>
#include <algorithm>
#include <stdlib.h>

using namespace std;

class Menu
{
    public:
        Menu(const string &_nom);
        ~Menu();
        int Afficher();
        static void AttendreAppuiTouche();
    private:
        string nom;
        string *options;
        int nbLignes;
        int longueurMax ;
};

#endif // MENU_H
