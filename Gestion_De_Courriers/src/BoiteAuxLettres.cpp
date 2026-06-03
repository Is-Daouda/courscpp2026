/** Name   : BoiteAuxLettres.cpp
 * Purpose : Fichier d'implémentation
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 02/06/2026
 * Update  : 03/06/2026
 **/

#include "BoiteAuxLettres.h"

BoiteAuxLettres::BoiteAuxLettres()
/**
 * Purpose : Constructeur
 **/
{
    //ctor
}

BoiteAuxLettres::~BoiteAuxLettres()
/**
 * Purpose : Destructeur pour libérer proprement la mémoire des courriers alloués
 **/
{
    for (Courrier* courrier : listCourrier) {
        delete courrier;
    }
}

void BoiteAuxLettres::ajouterCourrier(Courrier *c)
/**
 * Purpose : Méthode pour ajouter un courrier à la boîte
 **/
{
    listCourrier.push_back(c);
}

void BoiteAuxLettres::afficherTout()
/**
 * Purpose : Méthode pour afficher tout le contenu de la boîte
 **/
{
    std::cout << "--- Contenu de la boite aux lettres ---" << std::endl;
    for (Courrier* courrier : listCourrier) {
         std::cout << courrier->toString() << std::endl;
    }
}

void BoiteAuxLettres::calculerAffranchissementTotal()
/**
 * Purpose : Méthode pour calculer et afficher l'affranchissement total
 **/
{
    double somme(0);

    for (Courrier* courrier : listCourrier) {
        somme += courrier->calculerAffranchissement();
    }
    std::cout << "Le montant total requis pour envoyer tout le courrier : " << somme << " Euro" << std::endl;
}
