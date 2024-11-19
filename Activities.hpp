#pragma once
// Structures mémoires pour une collection de films.

#include "Offre.hpp";



class Excursion : public Offre{
private:
    int m_nvEtoiles;
    string m_ville;


public:
    Excursion(vector<string>& data);
    ~Excursion() override = default;
    void displayDetails() override;
 };

class Vols : public Offre{
private:
    string m_avion;
    string m_classe;
    string m_heurePrevueArrivee;
    string m_heurePrevueDepart;
    string m_jourPrevueArrivee;
    string m_jourPrevueDepart;
    string m_lieuArrivee;
    string m_lieuDepart;
    string m_noVol;
    string m_transporteur;
    string m_wifi;

public:
    Vols(vector<string>& data);
    ~Vols() override = default;
    void displayDetails() override;
    string getTransporteur();
};


class Hebergement : public Offre{
private:
    double m_coteSure10;
    string m_secteur;
    string m_ville;


public:
    Hebergement(vector<string>& data);
    ~Hebergement() override = default;
    void displayDetails() override;
};