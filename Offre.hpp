#pragma once

#include <string>
#include <vector>
#include "Prix.hpp"
using namespace std;

class Offre {
protected:
    Prix prix;
    string m_nom;
    string category;

public:
    Offre(vector<string>& data);
    virtual void displayDetails() = 0;
    virtual ~Offre() = default;
    string getNom();
    float getPrixUnitaire() const;
    string getDevise() const;
    string getCategory();
    float getPrixEnCAD() const;
    Prix getPrix() const;
};

