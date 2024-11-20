#include "Reservation.hpp"
#include <iostream>

Reservation::Reservation(const std::shared_ptr<Offre>& offre) : offre(offre) {}

double Reservation::calculerFraisTotaux() const {
    return offre->getPrixEnCAD();
}

void Reservation::afficherDetails(const std::string& prefix) const {
    std::cout << prefix << "Reservation: " << offre->getNom() << "\n";
}