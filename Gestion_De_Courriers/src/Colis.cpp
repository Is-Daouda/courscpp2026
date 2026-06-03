/** Name   : Colis.cpp
 * Purpose : Fichier d'implémentation
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 02/06/2026
 * Update  : 03/06/2026
 **/

#include "Colis.h"

Colis::Colis(double _volume, double _poids, std::string mode, std::string adresse) :
/**
 * Purpose : Constructeur d'initialisation
 **/
    Courrier(_poids, mode, adresse),
    volume(_volume)
{
    //ctor
}

Colis::~Colis()
/**
 * Purpose : Destructeur
 **/
{
    //dtor
}

void Colis::setVolume(double _volume)
/**
 * Purpose : Méthode de modification du volume.
 **/
{
    volume = _volume;
}

double Colis::getVolume() const
/**
 * Purpose : Méthode d'accès du volume.
 **/
{
    return volume;
}

double Colis::calculerAffranchissement() const
/**
 * Purpose : Méthode pour calculer l'affranchissement d'un colis
 **/
{
    double tarif = 0.25 * volume + 1.50 * (poids / 100);
    if (modeExpedition == "express") tarif *= 2;
    return tarif;
}

std::string Colis::toString() const
/**
 * Purpose : Méthode de description.
 **/
{
    std::string info = Courrier::toString() + "\t| Volume : " + std::to_string(volume);
    return info;
}
