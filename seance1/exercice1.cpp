#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "French"); // Pour afficher les caractères spéciaux dans la console

    int valeur, multiplicateurInferieur, multiplicateurSuperieur;

    cout << "Entrez le nombre à multiplier: " << endl;
    cin >> valeur;
    cout << "Entrez le nombre à partir du quel la multiplication va commencer: " << endl;
    cin >> multiplicateurInferieur;
    do
    {
        cout << "Entrez le nombre qui sera le dernier multiplicateur: " << endl;
        cin >> multiplicateurSuperieur;
        if (multiplicateurInferieur >= multiplicateurSuperieur) cout << "Le multiplicateur doit être supérieur à " << multiplicateurInferieur << endl;
    }
    while (multiplicateurInferieur >= multiplicateurSuperieur);

    for (int i = multiplicateurInferieur; i <= multiplicateurSuperieur; i++)
    {
        int resultat = i * valeur;
        cout << i << " x " << valeur << " = " << resultat << endl;
    }
    return 0;
}
