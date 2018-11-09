
/**
  @file alveoleslibres.cpp
  @brief Implémentation de la classe alveolesLibres
  @version 1.0
  @author Killian Auvé
  @date 16/10/18
*/
#include "alveoleslibres.h"
/**
 * @brief AlveolesLibres::AlveolesLibres
 * @param _nbRangees
 * @param _nbColonne
 * @details Initialise une alvéole libre
 */
AlveolesLibres::AlveolesLibres(const int _nbRangees, const int _nbColonne)
{
    vector <int> tableau;
    for(int i=0;i<=200;i++){
        push_back(i);

    }
    rangee=_nbRangees;
    colonne=_nbColonne;

}
/**
 * @brief AlveolesLibres::Liberer
 * @param _rangee n° de la rangée où se trouvait le rouleau
 * @param _colonne n° de la colonne où se trouvait le rouleau
 * @details Ajoute l’alvéole dont les coordonnées sont passées en paramètre à l'ensemble des alvéoles libres.
 */
void AlveolesLibres::Liberer(const short _rangee, const short _colonne)
{
    push_back(_rangee);
    push_back(_colonne);
}
/**
 * @brief AlveolesLibres::Reserver
 * @param _rangee n° de la rangée où se trouvait le rouleau
 * @param _colonne n° de la colonne où se trouvait le rouleau
 * @details Retourne vrai si une alvéole libre, dans ce cas,  la méthode fournit également la localisation (sa rangée et sa colonne). Elle la supprime également des alvéoles libres.
Si aucune alvéole n’est disponible, la méthode retourne faux
 * @return boolean
 */
bool AlveolesLibres::Reserver( short & _rangee, short & _colonne, int _alveole)
{
    bool retour = false;
      if(!empty())
      {
          retour = true;
          _rangee = (_alveole-1) / colonne + 1;
          _colonne = (_alveole-1) % rangee + 1;
      }
      return retour;
}

