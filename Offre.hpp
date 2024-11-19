#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <memory>
#include <functional>
#include <cassert>
#include "gsl/span"
using gsl::span;
using namespace std;



class Offre {
protected:
	int prixUnitaire;
	string m_devise;
	string m_nom;
	string category;
	
	

public:
	Offre(vector<string>& data);
	virtual void displayDetails() = 0;
	/*virtual ~Offre();
	string getNom();
	int getPrixUnitaire();
	int getDevise();
	void loadOffre();*/
};

