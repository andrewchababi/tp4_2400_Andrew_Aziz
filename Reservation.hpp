#ifndef RESERVATIONS_HPP
#define RESERVATIONS_HPP

#include "AbsPlanification.hpp"
#include "Prix.hpp"

class Reservations : public AbsPlanification {
private:
    std::string nom;
    Prix prix;

public:
    Reservations(const std::string& nom, const Prix& prix);
    float calculerFraisTotaux() const override;
    void afficherDetails(const std::string& prefix = "") const override;
};

#endif // RESERVATIONS_HPP