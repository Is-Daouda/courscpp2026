/** Name   : Lettre.cpp
 * Purpose : Fichier d'implémentation
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 02/06/2026
 * Update  : 03/06/2026
 **/

#include "Lettre.h"

Lettre::Lettre(std::string _format, double _poids, std::string mode, std::string adresse) :
/**
 * Purpose : Constructeur d'initialisation
 **/
    Courrier(_poids, mode, adresse),
    format(_format)
{
    //ctor
}

Lettre::~Lettre()
/**
 * Purpose : Destructeur
 **/
{
    //dtor
}

void Lettre::setFormat(std::string _format)
/**
 * Purpose : Méthode de modification du format.
 **/
{
    format = _format;
}

double Lettre::calculerAffranchissement() const
/**
 * Purpose : Calcul de l'affranchissement d'une lettre
 **/
{
    double tarif;
    double tarifDeBase = 2.5;
    if (format == "A3") tarifDeBase = 3.5;
    tarif = tarifDeBase + ceil(poids / 100.0) * 1.0;
    if (modeExpedition == "express") tarif *= 2;
    return tarif;
}

std::string Lettre::toString() const
/**
 * Purpose : Méthode de description
 **/
{
    std::string info = Courrier::toString() + "\t| Format : " + format;
    return info;
}

std::string Lettre::getFormat() const
/**
 * Purpose : Méthode d'accès du format.
 **/
{
    return format;
}
