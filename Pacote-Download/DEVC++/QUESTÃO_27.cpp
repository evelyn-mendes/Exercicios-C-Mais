#include <iostream>
//Algoritmo que receba dois números
//Calcule e mostre a divisão do primeiro número pelo segundo
main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variáveis
	float num1,num2,num12;
	
	//Código
	printf("-----ALGORTMO INTELIGENTE----\n\n\n");
	printf("Insira o primeiro número:");
	scanf("%f",&num1);
	printf("Insira o segundo número:");
	scanf("%f",&num2);
	
	num12=num1/num2;
	
	//Saída
	printf("\nA divisão desses dois números será: %.2f",num12);
	
}
