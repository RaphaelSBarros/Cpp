#include <iostream>
using namespace std;

int n1, n2, n3;
float m;

main(){
	cout << "Informe a primeira nota do aluno: ";
	cin >> n1;
	cout << "Informe a segunda nota do aluno: ";
	cin >> n2;
	cout << "Informe a terceira nota do aluno: ";
	cin >> n3;
	
	m = (n1+n2+n3)/3;
	
	if(m >= 7){
		cout << " O aluno foi Aprovado com media final "<<m;
	} else if(m >= 5){
		cout << " O aluno esta em Recuperacao com media final "<<m;
	} else{
		cout << "O aluno foi Reprovado com media final "<<m;
	}	
}