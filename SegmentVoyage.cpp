#include "SegmentVoyage.hpp"
#include <iostream>

SegmentVoyage::SegmentVoyage(const std::string& nom) 
    : nom(nom) {}

void SegmentVoyage::ajouterEnfant(const std::shared_ptr<AbsPlanification>& enfant) {
    enfants.push_back(enfant);
}

float SegmentVoyage::calculerFraisTotaux() const {
    float total = 0.0f;
    for (const auto& enfant : enfants) {
        total += enfant->calculerFraisTotaux();
    }
    return total;
}

void SegmentVoyage::afficherDetails(const std::string& prefix) const {
    std::cout << prefix << "Segment: " << nom << std::endl;
    for (const auto& enfant : enfants) {
        enfant->afficherDetails(prefix + "  ");
    }
}