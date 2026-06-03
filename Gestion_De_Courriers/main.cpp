/** Name   : main.cpp
 * Purpose : Utilisation des classes
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 02/06/2026
 * Update  : 03/06/2026
 **/

#include <clocale>
#include "BoiteAuxLettres.h"

using namespace std;

int main()
{
    BoiteAuxLettres boite;

    setlocale(LC_ALL, "French");
    cout << "--- Bienvenue dans l'application Gestion De Courriers ---" << endl;

    boite.ajouterCourrier(new Lettre("A4", 80, "normal", "Lomé Hédzranawoé"));
    boite.ajouterCourrier(new Lettre("A3", 250, "express", "Lomé Hédzranawoé"));
    boite.ajouterCourrier(new Colis(12, 1500, "normal", "Lomé Hédzranawoé"));
    boite.afficherTout();
    boite.calculerAffranchissementTotal();

    return 0;
}
