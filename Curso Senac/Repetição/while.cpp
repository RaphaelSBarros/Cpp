#include <iostream>
using namespace std;

int numeroPremiado;

main(){
	system("chcp 65001");
	
	do{
		cout<<"Digite um numero: ";
		cin>> numeroPremiado;
		
	}while(numeroPremiado != 15);
	
	cout << "\n\tAcertou!!";
		
}