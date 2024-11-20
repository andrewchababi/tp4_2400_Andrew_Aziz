#include "BDOR.hpp"
#include "Activities.hpp"

constexpr auto filepathVol = "MV_offres_de_reservation-Vol.csv";
constexpr auto filepathHebergement = "MV_offres_de_reservation-Hebergement.csv";
constexpr auto filepathExcursions = "MV_offres_de_reservation-Excursions.csv";

BDOR::BDOR() {
    ifstream volFile(filepathVol);
    ifstream hebergementFile(filepathHebergement);
    ifstream excursionsFile(filepathExcursions);

    cout << "Objet BDOR cree!" << endl;
    
    processFiles(volFile, hebergementFile, excursionsFile, offres);

    // if (volFile.is_open()) {
    //     string line;
    //     getline(volFile, line);
    //     while (getline(volFile, line)) {
    //         vector<string> data = parseLine(line);
    //         Vols vol = Vols(data);
    //         offres.ajouter(static_pointer_cast<Offre>(make_shared<Vols>(vol)));
    //     }
    //     volFile.close();
    // }
    
    // if (hebergementFile.is_open()) {
    //     string line;
    //     getline(hebergementFile, line);
    //     while (getline(hebergementFile, line)) {
    //         vector<string> data = parseLine(line);
    //         Hebergement hebergement = Hebergement(data);
    //         offres.ajouter(static_pointer_cast<Offre>(make_shared<Hebergement>(hebergement)));
    //     }
    //     hebergementFile.close();
    // }

    // if (excursionsFile.is_open()) {
    //     string line;
    //     getline(excursionsFile, line);
    //     while (getline(excursionsFile, line)) {
    //         vector<string> data = parseLine(line);
    //         Excursion excursion= Excursion(data);
    //         offres.ajouter(static_pointer_cast<Offre>(make_shared<Excursion>(excursion)));
    //     }
    //     excursionsFile.close();
    // }
}

vector<string> BDOR::parseLine(const string& line) {
    vector<string> result;
    stringstream ss(line);
    string token;

    while (getline(ss, token, ',')) {
        result.push_back(token);
    }

    return result;
}

template <typename T>
void BDOR::processFile(ifstream& file, Collection<shared_ptr<Offre>>& offres) {
    if (file.is_open()) {
        string line;
        getline(file, line); // Skip header line

        while (getline(file, line)) {
            vector<string> data = parseLine(line);
            auto item = make_shared<T>(data);
            offres.ajouter(static_pointer_cast<Offre>(item));
        }
        file.close();
    }
}

void BDOR::processFiles(ifstream& volFile, ifstream& hebergementFile, ifstream& excursionsFile, Collection<shared_ptr<Offre>>& offres) {
    cout << "Categorie Transport creee!" << endl;
    processFile<Vols>(volFile, offres);
    cout << "Categorie Hebergement creee!" << endl;
    processFile<Hebergement>(hebergementFile, offres);
    cout << "Categorie Excursion creee!" << endl;
    processFile<Excursion>(excursionsFile, offres);
}

