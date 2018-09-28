#include "menu.h"

Menu::Menu(const string &_nom):
    nom(_nom),
    longueurMax(0)
{
    ifstream fichierMenu(_nom.c_str());
    if(fichierMenu.fail())
    {
        cout << "Erreur de lecture du fichier " << _nom << endl;
        nbLignes = 0;
    }
    else
    {
        nbLignes = count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n');

        options = new string[nbLignes] ;

        fichierMenu.seekg(0,ios::beg);
        int taille = 0 ;
        for(int indice = 0 ; indice < nbLignes ; indice++)
        {
            getline(fichierMenu,options[indice]);
            taille = options[indice].length();
            if(taille > longueurMax)
                longueurMax = taille;

        }
    }
}

Menu::~Menu()
{
    delete[] options;
}


int Menu::Afficher()
{
    int choix = -1;
    bool passage = false ;

    if(nbLignes)
    {
        do
        {
            system("clear");
            cout << setfill('-');
            cout << "+" << setw(5) << "+" << setw(longueurMax+3) << "+" << endl;

            cout << setfill (' ');
            for(int indice = 0 ; indice < nbLignes ; indice++)
            {
                cout << "| " << setw(2) <<  right << indice << " | " << left << setw(longueurMax) << options[indice] << " |" << endl;
            }

            cout << setfill('-') << right;
            cout << "+" << setw(5) << "+" << setw(longueurMax+3) << "+" << endl;
            if(!passage)
            {
                cout << endl << "votre choix svp : " ;
                passage = true ;
            }
            else
            {
                cout << endl << "Entrer un nombre entre 0 et " << nbLignes-1 << " : ";
            }

            if(!(cin>>choix))
            {
                cin.clear();
                cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
                choix = -1;
            }
        }
        while (choix < 0 || choix > (nbLignes -1)) ;
    }
    else
    {
        cout << "erreur menu " << nom << endl;
    }

    system("clear");
    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string bidon;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,bidon);
    cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");
}
