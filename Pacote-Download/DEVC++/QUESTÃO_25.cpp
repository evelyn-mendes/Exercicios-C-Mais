#include <iostream>
#include <math.h>
//Calcular o volume de uma caixa d'�gua cil�ndrica

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o de vari�veis
	float raio,altura,volume1,volume2;
	
	//C�digo
	printf("Valor do raio:");
	scanf("%f",&raio);
	
	printf("Valor da altura:");
	scanf("%f",&altura);
	
	volume1=pow(raio,2);
	volume2=volume1*altura;
	
	//Sa�da
	printf("\nO volume do da caixa d'�gua �:%.2f\n\n",volume2);
	
	system("pause");
}
