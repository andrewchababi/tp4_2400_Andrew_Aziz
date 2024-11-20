#pragma once

#include "AbsPlanification.hpp"
#include <vector>
#include <memory>

class BDP {
private:
    std::vector<std::shared_ptr<AbsPlanification>> voyages;

public:
    void ajouterVoyage(const std::shared_ptr<AbsPlanification>& voyage);
    float calculerFraisTotaux() const;
    void afficherDetails() const;
};