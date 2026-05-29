/** Name   : continent.cpp
 * Purpose : Implémentation des fonctions
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 26/05/2026
 * Update  : 29/05/2026
 **/

#include "continent.h"

void addContinent(std::string code, std::string name, sqlite3* db)
/**
 * Purpose : Fonction pour ajouter un Continent.
 */
{
    const char* sql = "INSERT INTO continent (codeContinent, nomContinent) VALUES (?, ?);";
    sqlite3_stmt* stmt;
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Erreur Create (Prepare) : " << sqlite3_errmsg(db) << std::endl;
        return;
    }

    // Liaison des paramètres (les index commencent à 1)
    sqlite3_bind_text(stmt, 1, code.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 2, name.c_str(), -1, SQLITE_TRANSIENT);

    // SQLITE_DONE indique que l'action (sans retour de lignes) s'est bien terminée
    if (sqlite3_step(stmt) == SQLITE_DONE) {
        std::cout << "Continent inséré avec succès!\n\n";
    } else {
        std::cerr << "Échec de l'insertion : " << sqlite3_errmsg(db) << std::endl;
    }
    sqlite3_finalize(stmt);
}

void listContinent(sqlite3* db)
/**
 * Purpose : Fonction pour afficher les Continents de la base de données.
 */
{
    const char* sql = "SELECT codeContinent, nomContinent FROM continent;";
    sqlite3_stmt* stmt;
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Erreur Read (Prepare) : " << sqlite3_errmsg(db) << std::endl;
        return;
    }
    std::cout << "\n===================== LISTE DES CONTINENTS =====================\n";
    std::cout << "Code\tNom\n";
    std::cout << "----------------------------------------------------------------\n";

    // SQLITE_ROW indique qu'une ligne est prête à être lue
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        const char* code = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        const char* nom = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        std::cout << code << "\t" << nom << "\t" << std::endl;
    }
    std::cout << "================================================================\n\n";
    sqlite3_finalize(stmt);
}
