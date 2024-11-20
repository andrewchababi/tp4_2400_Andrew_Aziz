#include "Prix.hpp"

Prix::Prix(float montant, const std::string& devise) 
    : montant(montant), devise(devise) {}

float Prix::getMontant() const {
    return montant;
}

std::string Prix::getDevise() const {
    return devise;
}

float Prix::convertirEnCAD() const {
    if (devise == "EUR") {
        return montant * TAUX_CONVERSION;
    }
    return montant;
}