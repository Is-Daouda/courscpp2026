#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "French"); // Pour afficher les caractères spéciaux dans la console

    int nombreNote;
    float moyenneGenerale, noteTotal(0.f);

    cout << "Entrez le nombre note: " << endl;
    cin >> nombreNote;
    float* lesNotes = new float[nombreNote];

    for (int i(0); i < nombreNote; i++)
    {
        cout << "Entrez la note N°" << i + 1 << " :" << endl;
        cin >> lesNotes[i];
        noteTotal += lesNotes[i];
    }
    moyenneGenerale = noteTotal / nombreNote;

    cout << "Les notes enrégistrées: " << endl;
    for (int i(0); i < nombreNote; i++)
    {
        cout << "N°" << i + 1 << " : " << lesNotes[i] << endl;
        if (lesNotes[i] > moyenneGenerale) cout << "La note N°" << i + 1 << " qui est " << lesNotes[i] << " est supérieur à la moyenne " << moyenneGenerale << endl;
    }
    cout << "La note total est : " << noteTotal << endl;
    cout << "La moyenne générale des notes est : " << moyenneGenerale << endl;

    delete[] lesNotes;
    return 0;
}
