#include <iostream>
using namespace std;

int i, j;



int main(){
	i = 0;
	j = 0;
	
	while(i <= 10){
		j+=i;
		
		i++;
	};
	
	cout << "\n\tA soma dos numeros de 1 a 10 e: "<<j;
}	