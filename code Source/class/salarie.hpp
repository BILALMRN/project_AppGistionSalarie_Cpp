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
    vector<string> LastSalary_payments;
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
        void afficheInformationSalarie(vector <salarie> &ob, int& i) {
		int k;
		for (k = 0; k <= i; k++) {
				cout << "id est  " << ob[k].id << endl;
				cout << "nom est  " <<ob[k]. nomDeSalarie << endl;
				cout << "prenom est " <<ob[k]. prenomDeSalarie << endl;
				cout << "salarie est   " << ob[k].valSalarie << endl;
	
		
		}
	}

	// afichage
	void afficheInformationSalarie()  {	
		cout << "id : " << id << endl;
		cout << "nom : " << nomDeSalarie << endl;
		cout << "pre : " << prenomDeSalarie << endl;
		cout << "sal : " << valSalarie << endl;
		affichPiementdessalaires();
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
	
       void AddPiementdessalaires() {
            LastSalary_payments.push_back(to_string(valSalarie)+"$");
			cout << "---- IS ADD ----"<< endl;
			}
void affichPiementdessalaires() {
	   /*for(auto i : date)
        cout << "DATE DE payment : " << i << "\t\t";*/
		if(LastSalary_payments.size()==0){
cout<< "\t\t n'exit pas LastSalary payments "  << endl;
		}
		else {
			for(auto i : LastSalary_payments)
		cout<< "\t\t LastSalary payments : "  << i << endl;
		}

		cout << "\n\n";
            
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
