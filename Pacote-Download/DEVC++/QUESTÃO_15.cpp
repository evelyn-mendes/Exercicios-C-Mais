#include <iostream>
//Conta do bar

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração de variáveis
	int carlos,andre;
	float felipe,conta,div;
	
	//Código
	printf("-----Bar do Banana-----\n\n\n");
	
	printf("Valor total da conta:");
	scanf("%f",&conta);
	
	div=conta/3;
	andre=div;
	carlos=div;
	felipe=(float)conta/3;
	
	//Saída
	printf("\n\n-----Ficará para cada um...-----\n\n");
	printf("André e Calos, devem pagar: R$%i\n",andre,carlos);
	printf("Felipe deverá pagar       : R$%.2f\n\n",felipe);
	
	system("pause");
}
