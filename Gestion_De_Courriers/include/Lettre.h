/** Name   : Lettre.h
 * Purpose : Fichier d'entête
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 02/06/2026
 * Update  : 03/06/2026
 **/

#ifndef LETTRE_H
#define LETTRE_H

#include <cmath>
#include "Courrier.h"

class Lettre : public Courrier
{
    public:
        /**
         * Purpose : Constructeur d'initialisation
         **/
        Lettre(std::string _format, double _poids, std::string mode, std::string adresse);

        /**
         * Purpose : Destructeur
         **/
        virtual ~Lettre();

        /**
         * Purpose : Méthode de modification du format.
         **/
        void setFormat(std::string _format);

        /**
         * Purpose : Calcul de l'affranchissement d'une lettre
         **/
        double calculerAffranchissement() const override;

        /**
         * Purpose : Méthode de description
         **/
        std::string toString() const override;

        /**
         * Purpose : Méthode d'accès du format.
         **/
        std::string getFormat() const;

    private:
        std::string format;
};

#endif // LETTRE_H
