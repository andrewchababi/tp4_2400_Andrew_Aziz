#pragma region "Includes"//{
#define _CRT_SECURE_NO_WARNINGS // On permet d'utiliser les fonctions de copies de cha�nes qui sont consid�r�es non s�curitaires.

#include "BDOR.hpp";      // Structures de donn�es pour la collection de films en m�moire.

#include "bibliotheque_cours.hpp"
#include "verification_allocation.hpp" // Nos fonctions pour le rapport de fuites de m�moire.

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <algorithm>
#include <sstream>
#include "cppitertools/range.hpp"
#include "gsl/span"
#include "debogage_memoire.hpp"        // Ajout des num�ros de ligne des "new" dans le rapport de fuites.  Doit �tre apr�s les include du syst�me, qui peuvent utiliser des "placement new" (non support� par notre ajout de num�ros de lignes).
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
