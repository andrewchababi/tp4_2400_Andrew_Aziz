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

#include "Activities.hpp"

string path = "MV_offres_de_reservation-Vol.csv";

void outputCSV(string& filePath) {
	ifstream inFile(filePath);
    if (!inFile) {
        cerr << "Error: Could not open file for reading!" << endl;
    }
    string line;
    cout << "Reading from file:" << endl;
    while (getline(inFile, line)) { // Read line by line
        cout << line << endl;
    }
    inFile.close(); // Close the file
}


int main() {
    // Example row of data from the Excel file
    vector<string> row = {
        "Air Canada AC 870 2024-10-26", 
        "Air Canada",
        "AC 870",
        "YUL",
        "CDG",
        "2024-10-26",
        "21:20",
        "2024-10-27",
        "9:30",
        "Airbus A330-300",
        "Economique",
        "true",
        "1127",
        "CAD"
        };



    // Call function to generate output
    //Vols test = Vols(row);
    BDOR test1 = BDOR();

    return 0;
}