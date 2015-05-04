#include "Calendar.h"

int main(){
	TacheManager manager;
	manager.load("taches.dat");
	//manager.ajouterTache("AW1","Partage des scenarii",Duree(1,30),Date(1,1,2015),Date(1,9,2015));
	//manager.ajouterTache("AW2","Identification des competences",Duree(2,30),Date(1,1,2015),Date(1,12,2015));
	manager.save("taches.dat");
	system("pause");
	return 0;
}
