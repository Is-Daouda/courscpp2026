/** Name   : BoiteAuxLettres.h
 * Purpose : Fichier d'entête
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 02/06/2026
 * Update  : 03/06/2026
 **/

#ifndef BOITEAUXLETTRES_H
#define BOITEAUXLETTRES_H

#include <vector>
#include "Lettre.h"
#include "Colis.h"

class BoiteAuxLettres
{
    public:
        /**
         * Purpose : Constructeur
         **/
        BoiteAuxLettres();

        /**
         * Purpose : Destructeur pour libérer proprement la mémoire des courriers alloués
         **/
        virtual ~BoiteAuxLettres();

        /**
         * Purpose : Méthode pour ajouter un courrier à la boîte
         **/
        void ajouterCourrier(Courrier *c);

        /**
         * Purpose : Méthode pour afficher tout le contenu de la boîte
         **/
        void afficherTout();

        /**
         * Purpose : Méthode pour calculer et afficher l'affranchissement total
         **/
        void calculerAffranchissementTotal();

    private:
        std::vector<Courrier*> listCourrier;
};

#endif // BOITEAUXLETTRES_H
