/**
  @file alveoleslibres.cpp
  @brief Déclaration de la classe alveoleslibres
  @version 1.0
  @author Théo MICHAUD
  @date 16/10/2018
  */


#include "alveoleslibres.h"


/**
 * @brief AlveolesLibres::AlveolesLibres
 * @param _nbRangees
 * @param _nbcolonne
 * @details Constructeur de la classe alveolesLibres, initialise le nombre de rangées et de colonnes disponibles.
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
 * @param _rangee n° de la rangée ou se trouvait le rouleau
 * @param _colonne n° de la colonne ou se trouvait le rouleau
 * @details Ajoute l'alvéole dont les coordonnées sont passées en paramètre
 *          à l'ensemble des alvéoles libres.
 */
void AlveolesLibres::Liberer(const int _rangee, const int _colonne)
{
    push_back(_rangee);
    push_back(_colonne);
}

/**
 * @brief AlveolesLibres::Reserver
 * @param _rangee
 * @param colonne
 * @return vrai si une alvéole libre, faux si aucune alvéole n’est disponible
 * @details Fournit la localisation de l'alvéole (sa rangée et sa colonne). Elle la supprime également des alvéoles libres.
 */


bool AlveolesLibres::Reserver(short &_rangee, short &_colonne)
{
    push_back(_rangee);
}








