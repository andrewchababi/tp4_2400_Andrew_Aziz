#include "SegmentVoyage.hpp"
#include <iostream>

SegmentVoyage::SegmentVoyage(const std::string& nom) : nom(nom) {}

void SegmentVoyage::ajouterComposant(const std::shared_ptr<AbsPlanification>& composant) {
    composants.push_back(composant);
}

float SegmentVoyage::calculerFraisTotaux() const {
    float total = 0.0f;
    for (const auto& composant : composants) {
        total += composant->calculerFraisTotaux();
    }
    return total;
}

void SegmentVoyage::afficherDetails(const std::string& prefix) const {
    std::cout << prefix << nom << std::endl;
    for (const auto& composant : composants) {
        composant->afficherDetails(prefix + "  ");
    }
}