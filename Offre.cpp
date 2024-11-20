#include "Offre.hpp"

Offre::Offre(vector<string>& data)
    : prix(stof(data[data.size() - 2]), data.back()) {
    m_nom = data[0];
}

string Offre::getNom() {
    return m_nom;
}

float Offre::getPrixUnitaire() const {
    return prix.getMontant();
}

string Offre::getDevise() const {
    return prix.getDevise();
}

string Offre::getCategory() {
    return category;
}

float Offre::getPrixEnCAD() const {
    return prix.convertirEnCAD();
}

Prix Offre::getPrix() const {
    return prix;
}