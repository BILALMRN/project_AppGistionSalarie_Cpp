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
	void afficheInformationSalarie()  {	
		cout << "id : " << id << endl;
		cout << "nom : " << nomDeSalarie << endl;
		cout << "pre : " << prenomDeSalarie << endl;
		cout << "sal : " << valSalarie << endl;
	}
	void modifierInformationSalarie() {
		cout << "Nouveau nom : ";
		cin >> this->nomDeSalarie;
		cout << "Nouveau prenom : ";
		cin >> this->prenomDeSalarie;
		cout << "Nouveau salaire : ";
		cin >> this->valSalarie;
				
	}
	//**des fonction
	void piementDesSalaires() {

	}
	void rechercheUnSalarie( vector<salarie>& ob, int i)  {
	
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
void removeUnSalarie(vector <salarie> &ob, int id) {
	int position=-1;
	for (int j = 0; j < ob.size(); j++) {
		if (ob[j].getId() == id)
			position = j;
	}

	if (position==0){
		ob.pop_back();
	}
	else if (position>0){
		for (int j = position; j< ob.size(); j++) {
		ob[j] = ob[j + 1];
		}
		ob.pop_back();
	}else 
		cout << "l id n exist pas\n";	
}

#endif // INCLUDED
