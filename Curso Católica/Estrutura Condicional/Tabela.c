#include <stdio.h>


int main(void){
	int Cod, Quant;
	float total, Unit;
	printf("\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n");
	printf("\xB3 Codigo do Produto \xB3 Preco Unitario\xB3 \n");
	printf("\xB3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB3\n");
	printf("\xB3       1001        \xB3      5,32     \xB3 \n");
	printf("\xB3       1324        \xB3      6,45     \xB3 \n");
	printf("\xB3       6548        \xB3      2,37     \xB3 \n");
	printf("\xB3       1987        \xB3      5,32     \xB3 \n");
	printf("\xB3       7623        \xB3      6,45     \xB3 \n");
	printf("\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9\n");


printf("Digite o Codigo do produto que deseja comprar: ");
scanf("%d",&Cod);

switch(Cod){
	case 1001:
		Unit = 5.32;
		printf("Digite a Quantidade de produtos que deseja levar: ");
		scanf("%d", &Quant);
		printf("O total da compra e de: %.2f", (Unit*Quant));
		break;
	break;
	
	case 1324:
		Unit = 6.45;
		printf("Digite a Quantidade de produtos que deseja levar: ");
		scanf("%d", &Quant);
		printf("O total da compra e de: %.2f", (Unit*Quant));
		break;
	break;
	
	case 6548:
		Unit = 2.37;
		printf("Digite a Quantidade de produtos que deseja levar: ");
		scanf("%d", &Quant);
		printf("O total da compra e de: %.2f", (Unit*Quant));
		break;
	break;
	
	case 1987:
		Unit = 5.32;
		printf("Digite a Quantidade de produtos que deseja levar: ");
		scanf("%d", &Quant);
		printf("O total da compra e de: %.2f", (Unit*Quant));
		break;
	break;
	
	case 7623:
		Unit = 6.45;
		printf("Digite a Quantidade de produtos que deseja levar: ");
		scanf("%d", &Quant);
		printf("O total da compra e de: %.2f", (Unit*Quant));
		break;
	break;
	
	default:
		printf("Codigo Invalido");
		break;
		
}
}
