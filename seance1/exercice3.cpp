#include <iostream>
#include <clocale>

using namespace std;

void saisieNote(int nombreNote, float &noteTotal, float lesNotes[])
{
    for (int i(0); i < nombreNote; i++)
    {
        cout << "Entrez la note N°" << i + 1 << " :" << endl;
        cin >> lesNotes[i];
        noteTotal += lesNotes[i];
    }
}

float calculMoyenne(float noteTotal, int nombreNote)
{
    return noteTotal / nombreNote;
}

void affichage(int nombreNote, float moyenneGenerale, float noteTotal, float lesNotes[])
{
    cout << "Les notes enrégistrées: " << endl;
    for (int i(0); i < nombreNote; i++)
    {
        cout << "N°" << i + 1 << " : " << lesNotes[i] << endl;
        if (lesNotes[i] > moyenneGenerale) cout << "La note N°" << i + 1 << " qui est " << lesNotes[i] << " est supérieur à la moyenne " << moyenneGenerale << endl;
    }
    cout << "La note totale est : " << noteTotal << endl;
    cout << "La moyenne générale des notes est : " << moyenneGenerale << endl;
}

int main()
{
    setlocale(LC_ALL, "French"); // Pour afficher les caractères spéciaux dans la console

    int nombreNote;
    float moyenneGenerale, noteTotal(0.f);

    cout << "--- Programme de sommation de note et de calcul de moyenne générale. ---" << endl;
    cout << "Entrez le nombre note: " << endl;
    cin >> nombreNote;
    float* lesNotes = new float[nombreNote];

    saisieNote(nombreNote, noteTotal, lesNotes);
    moyenneGenerale = calculMoyenne(noteTotal, nombreNote);
    affichage(nombreNote, moyenneGenerale, noteTotal, lesNotes);

    delete[] lesNotes;
    return 0;
}
