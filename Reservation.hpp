#pragma once

#include "AbsPlanification.hpp"
#include "Prix.hpp"
#include "Offre.hpp"

class Reservation : public AbsPlanification {
private:
    std::shared_ptr<Offre> offre;

public:
    Reservation(const std::shared_ptr<Offre>& offre);
    double calculerFraisTotaux() const override;
    void afficherDetails(const std::string& prefix = "") const override;
};