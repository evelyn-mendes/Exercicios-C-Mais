#include <iostream>
//Algoritmo que receba dois n�meros
//Calcule e mostre a divis�o do primeiro n�mero pelo segundo
main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declara��o de vari�veis
	float num1,num2,num12;
	
	//C�digo
	printf("-----ALGORTMO INTELIGENTE----\n\n\n");
	printf("Insira o primeiro n�mero:");
	scanf("%f",&num1);
	printf("Insira o segundo n�mero:");
	scanf("%f",&num2);
	
	num12=num1/num2;
	
	//Sa�da
	printf("\nA divis�o desses dois n�meros ser�: %.2f",num12);
	
}
