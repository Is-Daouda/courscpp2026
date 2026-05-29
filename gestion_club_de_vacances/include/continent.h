/** Name   : continent.h
 * Purpose : Fichier d'entête
 * Authors : DAOUDA NOUHOUN Ismael
 * Created : 26/05/2026
 * Update  : 28/05/2026
 **/

#ifndef CONTINENT_H
#define CONTINENT_H

#include <iostream>
#include <string>
#include "../sqlite/sqlite3.h"

/**
 * Purpose : Fonction pour ajouter un Continent.
 */
void addContinent(std::string code, std::string name, sqlite3* m_db);

/**
 * Purpose : Fonction pour afficher les Continents de la base de données.
 */
void listContinent(sqlite3* m_db);

#endif // CONTINENT_H
