#include <iostream>
using namespace std;

int i, num, a,b=1,c;

main(){
	system("chcp 65001");
	 
	cout << "Informe o numero de termos Fibonacci: ";
	cin >> num;
	
	for(i=0; i<num;i++){
		cout << b <<", ";
		c = a+b;
		a = b;
		b = c;	
	} cout << "\n\n\tO termo escolhido foi o "<< a;
}