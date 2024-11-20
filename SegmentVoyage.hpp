#pragma once

#include "AbsPlanification.hpp"
#include <vector>
#include <memory>

class SegmentVoyage : public AbsPlanification {
private:
    std::string nom;
    std::vector<std::shared_ptr<AbsPlanification>> composants;

public:
    SegmentVoyage(const std::string& nom);
    void ajouterComposant(const std::shared_ptr<AbsPlanification>& composant);
    float calculerFraisTotaux() const override;
    void afficherDetails(const std::string& prefix = "") const override;
};