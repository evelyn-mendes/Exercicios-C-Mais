#include <iostream>
//Algoritmo para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit

main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declaração das variáveis
	int ceu;
	float fair;
	
	//Código
	printf("-----TEMPERATURA-----\n\n\n");
	printf("Dê a temperatura em Celsius: ");
	scanf("%i",&ceu);
	
	//F = C x 1,8 + 32
	fair=(ceu*1.8)+32;
	
	
	//Saída
	printf("\nA temperatura em Fahrenheit será..%.2fF\n\n",fair);
	
	system("pause");
}
