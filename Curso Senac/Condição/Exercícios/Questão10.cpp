#include <iostream>
using namespace std;

int s;
float h;

main(){
	cout << "Informe o sexo do paciente: [1]Masculino\t[2]Feminino\n";
	cin >> s;
	cout << "Informe sua altura(m): ";
	cin >> h;
	
	if (s == 1){
		cout << "O seu IMC e: "<<(72.7*h)-58;	
	} else if (s == 2){
		cout << "O seu IMC e: "<<(62.1*h)-44.7;
	}else{
		cout << "Informe um sexo válido!";
	}
}