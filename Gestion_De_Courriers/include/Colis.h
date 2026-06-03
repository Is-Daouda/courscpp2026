/** Name   : Colis.h
 * Purpose : Fichier d'entête
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 02/06/2026
 * Update  : 03/06/2026
 **/

#ifndef COLIS_H
#define COLIS_H

#include "Courrier.h"

class Colis : public Courrier
{
    public:
        /**
         * Purpose : Constructeur d'initialisation
         **/
        Colis(double _volume, double _poids, std::string mode, std::string adresse);

        /**
         * Purpose : Destructeur
         **/
        virtual ~Colis();

        /**
         * Purpose : Méthode de modification du volume.
         **/
        void setVolume(double _volume);

        /**
         * Purpose : Méthode d'accès du volume.
         **/
        double getVolume() const;

        /**
         * Purpose : Méthode pour calculer l'affranchissement d'un colis
         **/
        double calculerAffranchissement() const override;

        /**
         * Purpose : Méthode de description.
         **/
        std::string toString() const override;

    private:
        double volume;
};

#endif // COLIS_H
