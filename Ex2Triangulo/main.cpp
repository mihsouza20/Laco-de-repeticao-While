#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
		
	float a, b, c, tri, area;
	tri = 1;

	do{
		printf ("Digite o valor do lado A: ");
		scanf ("%f",&a);
	
		printf ("Digite o valor do lado B: ");
		scanf ("%f",&b);
	
		printf ("Digite o valor do lado C: ");
		scanf ("%f",&c);
		
		area = a + b + c / 2;
		
		printf("\nO triângulo é %.4f \n", area);
		tri=tri+1;

	}while(tri <= 8);
 	system("PAUSE");
	return 0;
}
