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
	string name;
	

public:
	Offre ();
	virtual ~Offre();
	string getNom();
	int getPrixUnitaire();
	virtual void loadData(string& fileName) = 0;
	virtual void displayDetails() const = 0;
	void loadOffre();
};

