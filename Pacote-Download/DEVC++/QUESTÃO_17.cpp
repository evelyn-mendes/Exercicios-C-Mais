#include <iostream>
//Algoritmo para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit

main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declara��o das vari�veis
	int ceu;
	float fair;
	
	//C�digo
	printf("-----TEMPERATURA-----\n\n\n");
	printf("D� a temperatura em Celsius: ");
	scanf("%i",&ceu);
	
	//F = C x 1,8 + 32
	fair=(ceu*1.8)+32;
	
	
	//Sa�da
	printf("\nA temperatura em Fahrenheit ser�..%.2fF\n\n",fair);
	
	system("pause");
}
