#include <iostream>
#include <vector>
#include <string.h>
#include "class\salarie.hpp"

using namespace std;
int main() {
	int choix,t,k,id;
	vector <salarie> ob;
	cout << "\t --Ce programme pour Gistion de Salarie --\n";
	do {
		cout << "\n1 - add Un Salarie : " << endl;
		cout << "2 - affiche les Informations des Salaries - " << endl;
		cout << "3 - affiche les Informations de Salaries - "<< endl;
		cout << "4 - modifier les Information de Salarie - " << endl;
		cout << "5 - piement des salaires - " << endl;
		cout << "6 - delete les Information de Salaries - " << endl;
		cout << "7 - EXIT - " << endl;
		//Saisir le choix
		cout << ">> Saisir votre choix : ";
		cin >> choix;
		//le switch
		switch (choix) {
		case 1:
			ob.push_back(foctionSalarie());//pour add un valeur in table de ob
			break;
		case 2 :
			for(k = 0; k<ob.size();k++)
			ob[k].afficheInformationSalarie();

			break;
		case 3:
			cout<<"Entrez le id du salarie :";
			cin>>id;
			for(k = 0; k<ob.size();k++){
				if(ob[k].getId()==id){
				ob[k].afficheInformationSalarie();
				break;
				}
			}

			break;
		case 4:
			cout<<"Entrez le id du salarie :";
			cin>>id;
			for(k = 0; k<ob.size();k++){
				if(ob[k].getId()==id){
				ob[k].modifierInformationSalarie();
				break;
				}
			}
			break;
		case 5:
			ob[0].piementDesSalaires();
			break;
		case 6:
		if (ob.size() >0 ){
			cout << "saisir id de votre salarie : ";
			cin >> id ;
			removeUnSalarie(ob,id);

		}else
		     cout << "\ntable de salarie est vide\n";
		break;
		case 7:
			//exit est une foncion predefini dans c++
			exit(1);
			break;
			//
		default:
			cout << "votre choix n'exist pas";
		}
    cout << "\nclick 0 to continue : ";
	cin >> t;
	if (t != 0){	exit(1);  }
	} while (true);
	return 0;
}
