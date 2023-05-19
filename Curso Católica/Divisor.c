#include<stdio.h>

int main(void)
{
  
  
  
  printf("Informe o nome do vendedor: ");
  char vendedor[30];
  scanf("%s",&vendedor);
  
  printf("Digite o codigo da peca: ");
  int codigo;
  scanf("%d",&codigo);
  
  printf("Informe o preco unitario da peca: ");
  float unidade;
  scanf("%f", &unidade);
  
  printf("Informe a quantidade vendida: ");
  int quantidade;
  scanf("%d", &quantidade);
  float pagamento;
  
  pagamento = unidade*quantidade*0.05;
  
  
  printf("Vendedor: %s\n", vendedor);
  printf("Codigo da peca: %d\n", codigo);
  printf("preco unitario da peca: %.2f\n", unidade);
  printf("Quantidade vendida: %d\n", quantidade);
  printf("A comissao a ser recebida e de %.1f reais\n",pagamento);
  
return 0; 
}


