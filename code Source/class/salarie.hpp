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
	void afficheInformationSalarie() {
		cout << "id : " << id << endl;
		cout << "nom : " << nomDeSalarie << endl;
		cout << "pre : " << prenomDeSalarie << endl;
		cout << "sal : " << valSalarie << endl << endl << endl;
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

void rechercheUnSalarie() {
	string nom;
	string prenom;
	cout << "Entrez le nom du salarie : ";
	cin >> nom;
	cout << "Entrez le prenom du salarie : ";
	cin >> prenom;
	if (nom == nomDeSalarie && prenom == prenomDeSalarie) {
		afficheInformationSalarie();
	}
	else {
		cout << "Salarie non trouve." << endl;
	}
}
};

salarie foctionSalarie(){
	salarie temp;
	temp.addUnSalarie();
    return temp;
}
void removeUnSalarie(vector <salarie> &ob,int& i,int id ) {
	int position;
		for (int j=0;j<=i;j++){
		if(ob[j].getId() == id)
			position=j;
		}
		for (int j=position;j<i;j++){
			ob[j]=ob[j+1];
		}
}

#endif // INCLUDED
