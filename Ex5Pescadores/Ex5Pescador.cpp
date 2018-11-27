#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int kg, resp;
	float multapg, multa;
	resp=1;
	do{
	printf("Quantidade de Kgs pescado (s):");
	scanf("%d",&kg);
	
	
	if(kg <= 50){
		printf("Você está Liberado! ");
	}
	else
	if(kg >= 50){
	multa= kg-50;	
	multapg = multa*4;
		printf(" Você pagará multa de: %.2f reais \n", multapg);
	}
		printf("Deseja Calcular Novamente? \n");
		printf("1- Sim ou 2- Não \n");
		scanf("%d",&resp);
		resp=resp+1;
} while(resp<=5);


		system("PAUSE");
  return 0;
}
}
