#include "filesystem"
#include "Activities.hpp";


const string FILEPATH = "MV_offres_de_reservation.xlsx";


Vols::Vols(vector<string>& data) : Offre(data) {
    category = "Transport";
    m_transporteur = data[1];
    m_noVol = data[2];
    m_lieuDepart = data[3];
    m_lieuArrivee = data[4];
    m_jourPrevueDepart = data[5];
    m_heurePrevueDepart = data[6];
    m_jourPrevueArrivee = data[7];
    m_heurePrevueArrivee = data[8];
    m_avion = data[9];
    m_classe = data[10];
    m_wifi = data[11];
    displayDetails();
}


string Vols::getTransporteur() {
    return m_transporteur;
}


void Vols::displayDetails() {
    cout << "Entree " << getTransporteur() << " " << getNom() << " "
        << " rattachee a la categorie " << getCategory() << " creee!"
        << std::endl;
}



Hebergement::Hebergement(vector<string>& data) : Offre(data) {
    category = "Hebergement";
    m_ville = data[1];
    m_secteur = data[2];
    m_coteSure10 = stod(data[3]);
    displayDetails();
}


void Hebergement::displayDetails() {
    cout << "Entree " << getNom() << " rattache a la categorie " << getCategory() << " cree!" << endl;
}



Excursion::Excursion(vector<string>& data) : Offre(data) {
    category = "Excursion";
    m_ville = data[1];
    m_nvEtoiles = stoi(data[2]);
    displayDetails();
}


void Excursion::displayDetails() {
    cout << "Entree " << getNom() << " rattache a la categorie " << getCategory() << " cree!" << endl;
}
