#include <iostream>
#include <cstdlib>

using namespace std;


int i, num[15];

main(){
	system("chcp 65001");
	
	for(i=0;i<15;i++){
		cout << "\nGerando Número aleatório...(" <<i+1 <<"/15): ";
		srand(i);
		
		num[i] = rand() % 100;
		cout << "(" <<i+1 <<"/15) = " << num[i];
	}	 
}