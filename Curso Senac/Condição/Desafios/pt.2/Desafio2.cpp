#include <iostream>
#include <cmath>
using namespace std;

int n1, n2, n3, m;

main(){
	cout << "Digite 3 valores: ";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	
	if(n1 < n2 && n1 < n3){
		m = n1;
	}else if(n2 < n1 && n2 < n3){
		m = n2;
	}else{
		m = n3;
	}
	
	cout << "O menor numero e: "<<m;
} 