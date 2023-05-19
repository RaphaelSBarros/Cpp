#include <iostream>
using namespace std;

int i=0;
float total;

main(){
	system("chcp 65001");
	
	do{
		float peso[i+1];
		cout << "Informe o seu peso(kgs): ";
		cin >> peso[i];
		
		total += peso[i];
		i++;	
	}while(total < 180);
	
	cout << "\n\n\tA capacidade máxima foi atingida!";
}