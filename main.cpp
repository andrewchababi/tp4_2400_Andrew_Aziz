#pragma region "Includes"//{
#define _CRT_SECURE_NO_WARNINGS // On permet d'utiliser les fonctions de copies de chaînes qui sont considérées non sécuritaires.

#include "BDOR.hpp";      // Structures de données pour la collection de films en mémoire.

#include "bibliotheque_cours.hpp"
#include "verification_allocation.hpp" // Nos fonctions pour le rapport de fuites de mémoire.

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <algorithm>
#include <sstream>
#include "cppitertools/range.hpp"
#include "gsl/span"
#include "debogage_memoire.hpp"        // Ajout des numéros de ligne des "new" dans le rapport de fuites.  Doit être après les include du système, qui peuvent utiliser des "placement new" (non supporté par notre ajout de numéros de lignes).
using namespace std;
using namespace iter;
using namespace gsl;

#pragma endregion//}

//void loadTransportOffers(BDOR &bdor, const std::string &fileName) {
//    std::ifstream file(fileName);
//    std::string line;
//    while (std::getline(file, line)) {
//        std::stringstream ss(line);
//        std::string flightNumber, departure, destination, date, time;
//
//        std::getline(ss, flightNumber, ',');
//        std::getline(ss, departure, ',');
//        std::getline(ss, destination, ',');
//        std::getline(ss, date, ',');
//        std::getline(ss, time, ',');
//
//        bdor.addTransportOffer(flightNumber, departure, destination, date, time);
//    }
//}
