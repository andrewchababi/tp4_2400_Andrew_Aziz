#pragma once

#include "Offre.hpp";
#include "CollectionAbs.hpp"



class BDOR {
private:
	Collection<shared_ptr<Offre>> offres;
	vector<string>parseLine(const string& line);


public:
	BDOR();
	~BDOR() = default;
};
