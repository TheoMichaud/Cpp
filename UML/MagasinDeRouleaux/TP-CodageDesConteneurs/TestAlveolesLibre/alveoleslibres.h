/**
  @file alveoleslibres.h
  @brief Implémentation du header alveolesLibres
  @version 1.0
  @author Killian Auvé
  @date 16/10/18
*/

#ifndef ALVEOLESLIBRES_H
#define ALVEOLESLIBRES_H

#include <vector>
#include <QString>
using namespace std;

typedef vector<int> PileEntier;
class AlveolesLibres : public PileEntier
{
public:
    AlveolesLibres(const int _nbRangees=10, const int _nbColonne=20);
    void Liberer(const short _rangee, const short _colonne);
    bool Reserver( short & _rangee, short & _colonne, int _alveole);

private:
    string reference;
    short diametre;
    short rangee;
    short colonne;
};

#endif // ALVEOLESLIBRES_H

