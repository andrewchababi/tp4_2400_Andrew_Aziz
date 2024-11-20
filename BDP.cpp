#include "BDP.hpp"
#include <iostream>

void BDP::ajouterVoyage(const std::shared_ptr<AbsPlanification>& voyage) {
    voyages.push_back(voyage);
}

float BDP::calculerFraisTotaux() const {
    float total = 0.0f;
    for (const auto& voyage : voyages) {
        total += voyage->calculerFraisTotaux();
    }
    return total;
}

void BDP::afficherDetails() const {
    for (const auto& voyage : voyages) {
        voyage->afficherDetails();
    }
}