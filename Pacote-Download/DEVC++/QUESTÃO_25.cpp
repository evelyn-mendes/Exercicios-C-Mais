#include <iostream>
#include <math.h>
//Calcular o volume de uma caixa d'água cilíndrica

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração de variáveis
	float raio,altura,volume1,volume2;
	
	//Código
	printf("Valor do raio:");
	scanf("%f",&raio);
	
	printf("Valor da altura:");
	scanf("%f",&altura);
	
	volume1=pow(raio,2);
	volume2=volume1*altura;
	
	//Saída
	printf("\nO volume do da caixa d'água é:%.2f\n\n",volume2);
	
	system("pause");
}
