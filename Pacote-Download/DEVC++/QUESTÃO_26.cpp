#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração de variáveis
	float n1,n2,n3,mult;
	
	//Código
	printf("-----MULTIPLICAÇÃO COM A INSERÇÃO DE 3 NÚMEROS-----A\n\n\n");
	printf("Insira o primeiro número: ");
	scanf("%f",&n1);
	
	printf("Insira o segundo número: ");
	scanf("%f",&n2);
	
	printf("Insira um terceiro número: ");
	scanf("%f",&n3);
	
	mult= n1*n2*n3;
	
	//Saída
	printf("A multiplicação dos números é %.2f\n\n",mult);
	
	system("pause");
}
