#pragma once

#include "Offre.hpp";
#include "CollectionAbs.hpp"

class BDOR {
private:
	Collection<shared_ptr<Offre>> offres;
    vector<string> parseLine(const string& line);

    template <typename T>
    void processFile(ifstream& file1, Collection<shared_ptr<Offre>>& offres);

    void processFiles(ifstream& volFile, ifstream& hebergementFile, ifstream& excursionsFile, Collection<shared_ptr<Offre>>& offres);


public:
	BDOR();
	~BDOR() = default;
};
