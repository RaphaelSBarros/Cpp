#include <iostream>
using namespace std;

int i, num, esc;

main(){
	system("chcp 65001");
	
	do{
		cout << "Digite um número para consultar na sua tabuada: ";
		cin >> num;
		
			for(i=0;i<=10;i++){
				cout << num<<" x " << i <<" = "<< num*i<<"\n";
			}
		cout << "\nDigite \n\t[1]Consultar outro numero\n\t[0]Parar Consulta\n";
		cin >> esc;
	}while(esc != 0);
	cout << "Finalizando Programa...";
}