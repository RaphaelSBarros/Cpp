#include <stdio.h>
#include <math.h>
    
    int main(void){
    	
    //Variáveis	
int numero1, numero2;
float numero3;

		//entrada de dados
    printf("Digite o numero 1: ");
    scanf("%i", &numero1);
    fflush(stdin);
    
    printf("Digite o numero 2: ");
    scanf("%i", &numero2);
    fflush(stdin);
    
    printf("Digite o numero 3");
    scanf("%f", numero3);
    
    		//Saída de dados
    //a. o produto do dobro do primeiro  com a metade do segundo
    printf("A =%f", numero1 * 2 + (float)numero2/2);
    
    //b. a soma do triplo do primeiro com o terceiro.
    print("B=%f", numero1 * 3 + numero3);
    
    //c. o terceiro elevado ao cubo
    printf("C = %f", pow(numero3, 3)); //pow: calcula um valor elevado a uma potência.
    
    
return 0;

}
