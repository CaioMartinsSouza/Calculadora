#include <stdio.h>
int main(){
	int n1, n2, opt, res;
	
   //Primeiro numero
   
	printf("Digite o primeiro numero ");
	scanf("%d", &n1);
	
   //Sexgundo numero
   
	printf("Digite o segundo numero ");
	scanf("%d", &n2); 
	
	printf("Escolha \n\n");
	printf("1- Soma\n");
	printf("2- Subtracao\n");
	printf("3- Multiplicacao\n");
	printf("4- Divisao\n");
	scanf("%d" ,&opt);
	
	switch(opt)
			{
				case 1:
					res= n1+n2;
					printf("Resultado %d\n\n", res);
					break;
					
				case 2:
					res= n1-n2;
					printf("Resultado %d\n\n", res);
					break;
				
				case 3:
					res= n1*n2;
					printf("Resultado %d\n\n", res);
					break;
				
				case 4:
					res= n1/n2;
					printf("Resultado %d\n\n", res);
					break;
					
			}
	
	printf("%d", res);
	
}


