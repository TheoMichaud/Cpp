/**
  @file alveoleslibres.h
  @brief Déclaration de la classe alveoleslibres
  @version 1.0
  @author Théo MICHAUD
  @date 16/10/2018
  */


#ifndef ALVEOLESLIBRES_H
#define ALVEOLESLIBRES_H

#include <vector>
#include <QString>

using namespace std;

typedef vector<int> PilesEntiers;

class AlveolesLibres : public PilesEntiers
{
public:
    AlveolesLibres(const int _nbRangees=10, const int _nbcolonne=20);

    void Liberer(const int _rangee, const int _colonne);

    bool Reserver( short & _rangee,  short & _colonne);

private:
        string reference;
       short diametre;
       short rangee;
       short colonne;
};

#endif // ALVEOLESLIBRES_H
