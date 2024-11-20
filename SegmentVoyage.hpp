#ifndef SEGMENTVOYAGE_HPP
#define SEGMENTVOYAGE_HPP

#include "AbsPlanification.hpp"
#include <vector>
#include <memory>

class SegmentVoyage : public AbsPlanification {
private:
    std::string nom;
    std::vector<std::shared_ptr<AbsPlanification>> enfants;

public:
    SegmentVoyage(const std::string& nom);
    void ajouterEnfant(const std::shared_ptr<AbsPlanification>& enfant);
    float calculerFraisTotaux() const override;
    void afficherDetails(const std::string& prefix = "") const override;
};

#endif // SEGMENTVOYAGE_HPP