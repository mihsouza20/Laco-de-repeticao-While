#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int dep,fun;
	float VHora,HoraT,Bru,Liq;
	fun = 1;
	
	
	do{	
		printf("\n Informe o numero de dependentes: ");
		scanf("%d",&dep);
		printf("\n Digite o custo por hora de seu trabalho: ");
		scanf("%f",&VHora);
		printf("\n Digite sua carga horaria mensal: ");
		scanf("%f",&HoraT);
	
		Bru = VHora * HoraT;
		Liq = (dep * 300) + Bru;
				
		printf("\nO valor de seu salario bruto é %.2f \n", Bru);
		printf("\nO valor de seu salario liquido é %.2f \n", Liq);
		fun=fun+1;7
	
	}while (fun <= 10);
	system("PAUSE");
		
	return 0;

}
