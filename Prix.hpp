#pragma once

#include <string>

class Prix {
private:
    static constexpr float TAUX_CONVERSION = 1.5f;
    float montant;
    std::string devise;

public:
    Prix(float montant, const std::string& devise);
    float getMontant() const;
    std::string getDevise() const;
    float convertirEnCAD() const;
};