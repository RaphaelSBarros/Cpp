#include <stdio.h>

int main(void){
float m=0, c=0;

printf("Digite o valor em metros: ");
scanf("%f", &m);

c = m * 100;

printf("O valor convertido e: %.1f centimetros", c);

return 0;

}

