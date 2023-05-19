#include <iostream>
using namespace std;

int i, num[5];

main(){
	system("chcp 65001");
	 

	for(i=0; i<5;i++){
		cout >> "Digite 5 números(" <<i+1<<"/5): ";
		cin << num[i];
	};
}     