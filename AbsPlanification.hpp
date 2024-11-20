#pragma once

#include <string>
#include <vector>
#include <memory>
#include "Prix.hpp"

class AbsPlanification {
public:
    virtual float calculerFraisTotaux() const = 0;
    virtual void afficherDetails(const std::string& prefix = "") const = 0;
    virtual ~AbsPlanification() = default;
};