#include <iostream>
using namespace std;

int num, i = 0;

main(){
	system("chcp 65001");
	
	do{
		cout<<"\nDigite 1 para escrever Batata: \n";
		cin>> num;
		cout << "\nBatata\n";
		i++;
		
	}while(num == 1);
	
	cout << "\n\tA palavra foi escrita "<<i-1 <<" vezes.";
}