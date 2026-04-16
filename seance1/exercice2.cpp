#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "French"); // Pour afficher les caractères spéciaux dans la console

    int nombre;
    float moyenneGenerale, noteTotal(0.f);

    cout << "--- Programme de saisie des notes des étudiants et de calcul de moyenne générale. ---" << endl;
    cout << "Entrez le nombre d'étudiant: " << endl;
    cin >> nombre;
    float lesNotes[nombre];

    for (int i(0); i < nombre; i++)
    {
        cout << "Entrez la note de l'étudiant N°" << i + 1 << " :" << endl;
        cin >> lesNotes[i];
        noteTotal += lesNotes[i];
    }
    moyenneGenerale = noteTotal / nombre;

    cout << "Les notes enrégistrées: " << endl;
    cout << "La moyenne générale dans la matière est : " << moyenneGenerale << endl;
    for (int i(0); i < nombre; i++)
    {
        cout << "Etudiant N°" << i + 1 << " : " << lesNotes[i] << endl;
        if (lesNotes[i] > moyenneGenerale) {
            cout << "La note de l'étudiant N°" << i + 1 << " qui est " << lesNotes[i] << " est supérieur à la moyenne " << moyenneGenerale << endl;
        }
    }

    return 0;
}
