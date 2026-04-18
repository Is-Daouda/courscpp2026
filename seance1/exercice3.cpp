#include <iostream>
#include <clocale>

using namespace std;

void saisieNote(int nombre, float &noteTotal, float lesNotes[])
/** \brief Fonction pour entrer les notes des étudiants
 *
 * \param nombre
 * \param noteTotal
 * \param lesNotes[]
 * \return void
 *
 */
{
    for (int i(0); i < nombre; i++)
    {
        cout << "Entrez la note de l'étudiant N°" << i + 1 << " :" << endl;
        cin >> lesNotes[i];
        noteTotal += lesNotes[i];
    }
}

float calculMoyenne(float noteTotal, int nombre)
/** \brief Fonction pour calculer la moyenne générale
 *
 * \param noteTotal
 * \param nombre
 * \return float
 *
 */
{
    return noteTotal / nombre;
}

void affichage(int nombre, float moyenneGenerale, float noteTotal, float lesNotes[])
/** \brief Fonction pour afficher les notes des étudiants et la moyenne générale
 *
 * \param nombre
 * \param moyenneGenerale
 * \param noteTotal
 * \param lesNotes[]
 * \return void
 *
 */
{
    cout << "La moyenne générale dans la matière est : " << moyenneGenerale << endl;
    cout << "Les notes enrégistrées: " << endl;
    for (int i(0); i < nombre; i++)
    {
        cout << "Etudiant N°" << i + 1 << " : " << lesNotes[i] << endl;
        if (lesNotes[i] > moyenneGenerale) {
            cout << "La note de l'étudiant N°" << i + 1 << " qui est " << lesNotes[i] << " est supérieur à la moyenne " << moyenneGenerale << endl;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "French"); // Pour afficher les caractères spéciaux dans la console

    int nombre;
    float moyenneGenerale, noteTotal(0.f);

    cout << "--- Programme de saisie des notes des étudiants et de calcul de moyenne générale. ---" << endl;
    cout << "Entrez le nombre d'étudiant: " << endl;
    cin >> nombre;
    float lesNotes[nombre];

    saisieNote(nombre, noteTotal, lesNotes);
    moyenneGenerale = calculMoyenne(noteTotal, nombre);
    affichage(nombre, moyenneGenerale, noteTotal, lesNotes);

    return 0;
}
