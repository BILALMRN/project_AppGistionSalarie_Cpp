#ifndef salarie_HPP_INCLUDED
#define salarie_HPP_INCLUDED
#include <vector>
#include <iostream>
#include <string> 

using namespace std;


class salarie
{
	int id;
	char nomDeSalarie[20];
	char prenomDeSalarie[20];
	double valSalarie;
public:
	int getId() {
		return id;
	};
	void addUnSalarie() {
		cout << "Entrez id du salarie : ";
		cin >> this->id;
		cout << "Entrez le nom du salarie : ";
		cin >> this->nomDeSalarie;
		cout << "Entrez le prenom du salarie : ";
		cin >> this->prenomDeSalarie;
		cout << "Entrez le salaire du salarie : ";
		cin >> this->valSalarie;
	}
	// afichage
	void afficheInformationSalarie(const vector<salarie>& ob, int i) const {
		int id,j;
		cout << "Entrez le id du salarie : ";
		cin >> id;
		for (j = 0; j <= i; j++) {
			if (ob[j].getId() == id) {
				cout << "id : " << id << endl;
				cout << "nom : " << nomDeSalarie << endl;
				cout << "pre : " << prenomDeSalarie << endl;
				cout << "sal : " << valSalarie << endl;
				break;
			}
		
		}
	}
	void modifierInformationSalarie(vector<salarie>& ob, int i) {
		int id, j;
		cout << "Entrez le id du salarie : ";
		cin >> id;
		for (j = 0; j <= i; j++) {
			if (ob[j].getId() == id) {
				cout << "Nouveau nom : ";
				cin >> this->nomDeSalarie;
				cout << "Nouveau prenom : ";
				cin >> this->prenomDeSalarie;
				cout << "Nouveau salaire : ";
				cin >> this->valSalarie;
				break;
			}
		}
	}
	//**des fonction
	void piementDesSalaires() {

	}
	void rechercheUnSalarie(const vector<salarie>& ob, int i) const {
	
		int id,j;
		cout << "Entrez le id du salarie : ";
		cin >> id;
		for (j = 0; j <= i; j++) {
			if (ob[j].getId() == id) {
				cout << "id : " << id << endl;
				cout << "nom : " << nomDeSalarie << endl;
				cout << "pre : " << prenomDeSalarie << endl;
				cout << "sal : " << valSalarie << endl;
				break;
			}
		}
	}
};

salarie foctionSalarie() {
	salarie temp;
	temp.addUnSalarie();
	return temp;
}
void removeUnSalarie(vector <salarie> &ob, int& i, int id) {
	int position;
	for (int j = 0; j <= i; j++) {
		if (ob[j].getId() == id)
			position = j;
	}
	for (int j = position; j<i; j++) {
		ob[j] = ob[j + 1];
	}
}

#endif // INCLUDED
