#include "filesystem"
#include "Activities.hpp";


const string FILEPATH = "/MV_offres_de_reservation.xlsx";


void loadData(const string& filePath) {
	if (filesystem::exists(filePath)) {
		cout << "File exists: " << filePath << endl;
	} 
	else {
		cout << "Does not exist" << endl;
	}
}

int main() {
	loadData(FILEPATH);
	return 0;
}