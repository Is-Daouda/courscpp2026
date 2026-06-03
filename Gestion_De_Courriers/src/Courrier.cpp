/** Name   : Courrier.h
 * Purpose : Fichier d'implémentation
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 02/06/2026
 * Update  : 03/06/2026
 **/

#include "Courrier.h"

Courrier::Courrier(double p, std::string mode, std::string adresse) :
/**
 * Purpose : Constructeur d'initialisation.
 **/
    poids(p),
    modeExpedition(mode),
    adresseDestination(adresse)
{
    //ctor
}

Courrier::~Courrier()
/**
 * Purpose : Destructeur virtuel.
 **/
{
    //dtor
}

void Courrier::setPoids(double _poids)
/**
 * Purpose : Méthode de modification du poids.
 **/
{
    poids = _poids;
}

void Courrier::setModeExpedition(std::string mode)
/**
 * Purpose : Méthode de modification du mode d'expédition.
 **/
{
    modeExpedition = mode;
}

void Courrier::setAdresseDestination(std::string adresse)
/**
 * Purpose : Méthode de modification de l'adresse de destination.
 **/
{
    adresseDestination = adresse;
}

std::string Courrier::toString() const
/**
 * Purpose : Méthode de description.
 **/
{
    std::string info = "Poids : " + std::to_string(poids) + " g" + "\t| Mode d'expedition : " + modeExpedition + "\t| Adresse : " + adresseDestination;
    return info;
}


double Courrier::getPoids() const
/**
 * Purpose : Méthode d'accès du poids.
 **/
{
    return poids;
}


std::string Courrier::getModeExpedition() const
/**
 * Purpose : Méthode d'accès du mode d'expédition
 **/
{
    return modeExpedition;
}


std::string Courrier::getAdresseDestination() const
/**
 * Purpose : Méthode d'accès de l'Adresse de destination
 **/
{
    return adresseDestination;
}
