
#include "BDOR.hpp"
#include "Activities.hpp"

constexpr auto filepathVol = "MV_offres_de_reservation-Vol.csv";
constexpr auto filepathHebergement = "MV_offres_de_reservation-Hebergement.csv";
constexpr auto filepathExcursions = "MV_offres_de_reservation-Excursions.csv";



BDOR::BDOR() {
    ifstream volFile(filepathVol);
    ifstream hebergementFile(filepathHebergement);
    ifstream excursionsFile(filepathExcursions);



    if (volFile.is_open()) {
        string line;
        getline(volFile, line);


        while (getline(volFile, line)) {
            vector<string> data = parseLine(line);
            Vols vol = Vols(data);
            offres.ajouter(static_pointer_cast<Offre>(make_shared<Vols>(vol)));
        }
        volFile.close();
    }
    
    if (hebergementFile.is_open()) {
        string line;
        getline(hebergementFile, line);
        
        while (getline(hebergementFile, line)) {
            vector<string> data = parseLine(line);
            Hebergement hebergement = Hebergement(data);
            offres.ajouter(static_pointer_cast<Offre>(make_shared<Hebergement>(hebergement)));
        }
        hebergementFile.close();
    }

    if (excursionsFile.is_open()) {
        string line;
        getline(excursionsFile, line);

        while (getline(excursionsFile, line)) {
            vector<string> data = parseLine(line);
            Excursion excursion= Excursion(data);
            offres.ajouter(static_pointer_cast<Offre>(make_shared<Excursion>(excursion)));
        }
        excursionsFile.close();
    }

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

