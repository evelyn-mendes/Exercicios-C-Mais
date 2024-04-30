#include <iostream>
//Algoritmo em que o dono forneça a quantidade de sanduíches a fazer 
//E a máquina informe as quantidades (em quilos) de queijo, presunto e carne necessários para compra
main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variáveis
	int sand;
	float queijo,presunto,carne;
	
	//Código
	printf("-----Lanchonete Gostosura-----\n\n\n");
	printf("Forneça o número de sanduíches: ");
	scanf("%i",&sand);
	
	//Cada fatia de queijo ou presunto pesa 50 gramas
	//E a rodela de hambúrguer pesa 100 gramas
	
	queijo=(0.05*2)*sand;
	presunto=0.05*sand;
	carne=0.10*sand;
	
	
	//Saída
	printf("A quantidade de queijo necessária será: %.0fKg\n",queijo);
	printf("A quantidade de presunto necessário será: %.0fKg\n",presunto);
	printf("A quantidade de cane necessária será: %.0fKg\n\n",carne);
	
	system("pause");
}
