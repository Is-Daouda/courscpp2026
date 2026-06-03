/** Name   : Courrier.h
 * Purpose : Fichier d'entête
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 02/06/2026
 * Update  : 03/06/2026
 **/

#ifndef COURRIER_H
#define COURRIER_H

#include <iostream>
#include <iomanip>
#include <string>

class Courrier
{
    public:
        /**
         * Purpose : Constructeur d'initialisation.
         **/
        Courrier(double _poids, std::string mode, std::string adresse);

        /**
         * Purpose : Destructeur virtuel.
         **/
        virtual ~Courrier();

        /**
         * Purpose : Méthode de modification du poids.
         **/
        void setPoids(double _poids);

        /**
         * Purpose : Méthode de modification du mode d'expédition.
         **/
        void setModeExpedition(std::string mode);

        /**
         * Purpose : Méthode de modification de l'adresse de destination.
         **/
        void setAdresseDestination(std::string adresse);

        /**
         * Purpose : Méthode abstraite.
         **/
        virtual double calculerAffranchissement() const = 0;

        /**
         * Purpose : Méthode de description.
         **/
        virtual std::string toString() const;

        /**
         * Purpose : Méthode d'accès du poids.
         **/
        double getPoids() const;

        /**
         * Purpose : Méthode d'accès du mode d'expédition
         **/
        std::string getModeExpedition() const;

        /**
         * Purpose : Méthode d'accès de l'adresse de destination
         **/
        std::string getAdresseDestination() const;

    protected:
        double poids;
        std::string modeExpedition;
        std::string adresseDestination;
};

#endif // COURRIER_H
