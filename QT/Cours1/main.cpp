#include <QCoreApplication>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
/************************     Utilisation des vecteurs        **********************************************/

    /*vector <int> tableau;
    cout << setfill('0');
    for(int indice = 0; indice < 30 ; indice++)
    {
        tableau.push_back(indice);
        cout << "nombre d'éléments : " << setw(2) << tableau.size();
        cout << " -- Capacité : " << setw(2) << tableau.capacity() << endl;
    }
    cout << endl;

    //retrait d'un éléments à la fin du tableau
    tableau.pop_back();
    cout << "nombre d'éléments : " << setw(2) << tableau.size();
    cout << " -- Capacité : " << setw(2) << tableau.capacity() << endl;
    //retrait d'un éléments au debut du tableau
    //tableau.pop_front(); //n'existe pas sous QT
    cout << "nombre d'éléments : " << setw(2) << tableau.size();
    cout << " -- Capacité : " << setw(2) << tableau.capacity() << endl;

    */

    /************************     Équivalent du Foreach        **********************************************/

    vector<string> vect;
    vect.push_back("C");
    vect.push_back("C++");
    vect.push_back("Java");

    list<string> lst;
    //boucle sur un vecteur de la STL
    for ( const string & str : vect){
        lst.push_front( str );
    }

    for ( const string & str : lst){
        cout << str << " - ";
    }
    cout << endl;







    return a.exec();
}
