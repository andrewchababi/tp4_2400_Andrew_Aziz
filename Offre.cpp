#include "Offre.hpp"

Offre::Offre(vector<string>& data) {
	const int lastIndex = data.size() - 1;
	prixUnitaire = stoi(data[lastIndex - 1]);
	m_devise = data[lastIndex];
	m_nom = data[0];
}

string Offre::getNom() {
	return m_nom;
}

int Offre::getPrixUnitaire() {
	return prixUnitaire;
}

string Offre::getDevise() {
	return m_devise;
}

string Offre::getCategory() {
	return category;
}