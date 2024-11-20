#pragma once

#include "Offre.hpp";
#include "CollectionAbs.hpp"

class BDOR {
private:
	Collection<shared_ptr<Offre>> offres;
    vector<string> parseLine(const string& line);

    template <typename T>
    void processFile(ifstream& file, Collection<shared_ptr<Offre>>& offres);

    void processFiles();


public:
	BDOR();
	~BDOR() = default;
};
