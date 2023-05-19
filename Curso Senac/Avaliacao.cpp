#include <iostream>
using namespace std;

int op;

int input, s, m, h;

int dep, cpf, desc = 5;
float sm = 1300, rm;

float capital, taxa;

int dias;

int i, num;
float total;

int j;

main(){
	system("chcp 65001");
	
	do{
		cout<<"\n\n\tEscolha um exercício: \n";
		
		cout<<"\n[1] Exercício 6";
		cout<<"\n[2] Exercício 16";
		cout<<"\n[3] Exercício 19";
		cout<<"\n[4] Exercício 26";
		cout<<"\n[5] Exercício 27";
		cout<<"\n[6] Exercício Extra";
		cout<<"\n[7] Sair\n";
		cin>> op;
		
		switch(op){
			case 1:{
				cout << "Digite a duracao do evento em segundos: ";
				cin >> input;
				
				h = input / 3600;
				input = input - h * 3600;
				
				m =  input / 60;
				input = input - m * 60;
				
				s = input;
				
				cout << "A duracao do evento em horas, minutos e segundos e: " <<h;
				cout << "horas, " <<m;
				cout << " minutos, " <<s;
				cout << " segundos";
				break;
			}
			case 2:{
				cout << "\nDigite seu CPF: ";
				cin >> cpf;
				
				cout << "\nInforme o numero de dependentes: ";
				cin >> dep;
				
				cout << "\nInforme o valor da sua renda mensal: ";
				cin >> rm;
				
				rm = rm - (rm * ((dep * desc)/100));
				
				if(rm > (sm*2) && rm <= (sm*3)){
					cout << "De acordo com a sua renda mensal voce sera taxado em 5% da sua renda em impostos";
					cout << "\nValor do imposto: "<<rm*0.05;
					
				}else if(rm > (sm*3) && rm <= (sm*5)){
					cout << "De acordo com a sua renda mensal voce sera taxado em 10% da sua renda em impostos";
					cout << "\nValor do imposto: "<<rm*0.10;
					
				}else if(rm > (sm*5) && rm <= (sm*7)){
					cout << "De acordo com a sua renda mensal voce sera taxado em 15% da sua renda em impostos";
					cout << "\nValor do imposto: "<<rm*0.15;
					
				}else if(rm > (sm*7)){
					cout << "De acordo com a sua renda mensal voce sera taxado em 20% da sua renda em impostos";
					cout << "\nValor do imposto: "<<rm*0.20;
					
				}else{
					cout << "De acordo com a sua renda mensal voce esta ISENTO de impostos";
				}
				break;
			}
			case 3:{
				cout << "Informe o valor do capital: ";
				cin >> capital;
				cout << "Informe a taxa cobrada(Ex: 5% = 0.05): ";
				cin >> taxa;
				cout << "Informe o tempo em dias: ";
				cin >> dias;
				
				cout << "\nO valor do capital é de: "<<capital;
				cout << "\nCom uma taxa de: "<<taxa*100 <<"% ao dia";
				cout << "\nValor dos juros: "<<capital*(taxa*dias);
				
				cout << "\nValor total do montante é de: "<<capital +(capital*(taxa*dias));
				break;
			}
			case 4:{
				total = 0;
				cout << "Informe a quantidade de pessoas: ";
				cin >> num;
				float pessoas[num];
				for(i=0;i<num;i++){
					cout << "\nDigite o peso(kg) da pessoa "<<i+1<<": ";
					cin >> pessoas[i];
					total += pessoas[i];
				}
				cout << "\nO peso médio das "<<num<<" pessoas é: "<<(total / num) <<"kgs";
				break;
			}
			case 5:{
				total = 0;
				do{
					float peso[j+1];
					cout << "Informe o seu peso(kgs): ";
					cin >> peso[j];
					
					total += peso[j];
					j++;	
				}while(total < 180);	
				cout << "\n\n\tA capacidade máxima foi atingida!";
				break;
			}
			case 6:{
				cout << "\n\tIsenção por motivos de kahoot :P\n";
				break;
			}
			case 7:{
				cout<<"\n\tFinalizando programa. . .\n";
				break;
			}
			default:{
				cout<<"Opção Inválida!";
				break;
			}
		}	
	}while(op != 7);	
}