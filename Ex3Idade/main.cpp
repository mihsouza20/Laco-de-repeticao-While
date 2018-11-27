#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
  
  int anonasc, idade, anoatual, ano;
  ano=1;
 
 	do{  
 		 printf("Digite seu ano de nascimento: ");
  		scanf("%d",&anonasc);
  
  		printf("Digite o ano atual: ");
   		scanf("%d", &anoatual);
   		
 		 idade = anoatual - anonasc;
  
 		 printf("Sua idade È: %d ",idade);
  
	  ano=ano+1;
  
 	 	if (idade >= 18)
  		printf("\n… maior de idade\n");
  		  	  	  
  		if (idade < 18)
  		printf("\n… menor de idade\n");
 
  		  
	}while(ano<=15);
  	system("PAUSE");	 
 	 return 0;
}
