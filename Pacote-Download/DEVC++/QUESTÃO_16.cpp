#include <iostream>
//Algoritmo em que o dono forne�a a quantidade de sandu�ches a fazer 
//E a m�quina informe as quantidades (em quilos) de queijo, presunto e carne necess�rios para compra
main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declara��o de vari�veis
	int sand;
	float queijo,presunto,carne;
	
	//C�digo
	printf("-----Lanchonete Gostosura-----\n\n\n");
	printf("Forne�a o n�mero de sandu�ches: ");
	scanf("%i",&sand);
	
	//Cada fatia de queijo ou presunto pesa 50 gramas
	//E a rodela de hamb�rguer pesa 100 gramas
	
	queijo=(0.05*2)*sand;
	presunto=0.05*sand;
	carne=0.10*sand;
	
	
	//Sa�da
	printf("A quantidade de queijo necess�ria ser�: %.0fKg\n",queijo);
	printf("A quantidade de presunto necess�rio ser�: %.0fKg\n",presunto);
	printf("A quantidade de cane necess�ria ser�: %.0fKg\n\n",carne);
	
	system("pause");
}
