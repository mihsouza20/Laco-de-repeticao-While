#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int num, resp;
	resp=1;
	do{

	printf("\n Escolha uma das opções: 1: BigMac, 2: Quarteirão, 3: MacChicken, 4: Cheddar MacMelt, 5: MacMax");
	printf("\n Digite o número do seu lanche de 1 a 5: ");
	scanf("%d", &num);
	
	switch(num){
	case 1:
		printf(" BigMac \n");
		break;
		
	case 2:
		printf("Quarteirão \n");
		break;
		
	case 3:
		printf("MacChicken \n");
		break;
		
	case 4:
		printf("Cheddar MacMelt \n");
		break;
		
	case 5:
		printf("MacMax \n");
		break;
		
	default:
		printf(" Valor Inválido \n");
		
	
	}
		printf("Deseja Calcular Novamente? \n");
		printf("1- Sim ou 2- Não \n");
		scanf("%d",&resp);
} while(resp==1);
	system("PAUSE");
  return 0;
}	
