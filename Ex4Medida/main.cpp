#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float cm, dm, m, mm, medidas;
	medidas=1;
	
	do{
		printf("Informe a medida em centimetros:");
		scanf("%f",&cm);
	
		m = cm/100;
		dm = m*10;
		mm = cm*10;
	
		printf("Essa medida em metros �: %.1f",m);
		printf("\nEssa medida em decimetros �: %.1f",dm);
		printf("\nEssa medida em milimetros �: %.1f\n",mm);
		medidas=medidas+1;
	
	}while(medidas<=10);
		system("PAUSE");
				
	return 0;
}
