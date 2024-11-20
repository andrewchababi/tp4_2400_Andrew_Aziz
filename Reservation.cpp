#include "Reservation.hpp"
#include <iostream>

Reservations::Reservations(const std::string& nom, const Prix& prix) 
    : nom(nom), prix(prix) {}

float Reservations::calculerFraisTotaux() const {
    return prix.convertirEnCAD();
}

void Reservations::afficherDetails(const std::string& prefix) const {
    std::cout << prefix << "Reservation: " << nom 
              << " | Prix: " << prix.getMontant() << " " << prix.getDevise() << std::endl;
}