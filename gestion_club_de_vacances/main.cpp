/** Name   : main.cpp
 * Purpose : Utilisation des fonctions du fichier continent.h et SQLite
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 26/05/2026
 * Update  : 28/05/2026
 **/

#include <iostream>
#include <clocale>
#include "sqlite/sqlite3.h"
#include "continent.h"

using namespace std;

sqlite3* openDB(const std::string& dbName)
/**
 * Purpose : Fonction pour ouvrir la base de données et créer la table Continent.
 */
{
    sqlite3* db;
    if (sqlite3_open(dbName.c_str(), &db) != SQLITE_OK) {
        std::cerr << "Erreur d'ouverture de la base : " <<
        sqlite3_errmsg(db) << std::endl;
        db = nullptr;
    }

    // Création de la table si elle n'existe pas
    const char* create_sql = "CREATE TABLE IF NOT EXISTS continent ("
                             "codeContinent VARCHAR(3) PRIMARY KEY NOT NULL, "
                             "nomContinent VARCHAR(20));";

    if (sqlite3_exec(db, create_sql, nullptr, nullptr, nullptr) != SQLITE_OK) {
        std::cerr << "Erreur de création de table : " << sqlite3_errmsg(db) << std::endl;
    }
    return db;
}

void closeDB(sqlite3* db)
/**
 * Purpose : Fonction pour fermer la base de données.
 */
{
    sqlite3_close(db);
}

int main()
{
    int answer;
    std::string code, name;
    sqlite3* db = openDB("continent.db");

    setlocale(LC_ALL, "French");
    cout << "--- Bienvenue dans l'application CRUD Continent ---" << endl;

    do {
        cout << "Saisissez un numéro listé en dessous pour éffectuer son action." << endl;
        cout << "1. Ajouter" << endl;
        cout << "2. Liste" << endl;
        cout << "3. Modifier" << endl;
        cout << "4. Spprimer" << endl;
        cout << "0. Quitter" << endl;
        cin >> answer;

        switch(answer) {
        case 1:
            cout << "Entrez le code du continent: ";
            cin >> code;
            cout << "Entrez le nom du continent: ";
            cin >> name;
            addContinent(code, name, db);
        break;
        case 2:
            listContinent(db);
        break;
        case 3:
            cout << "Modification de l'enrégistrement." << endl;
        break;
        case 4:
            cout << "Suppression de l'enrégistrement." << endl;
        break;
        }
    }
    while(answer != 0);
    closeDB(db);

    return 0;
}
