#include <iostream>
//Conta do bar

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o de vari�veis
	int carlos,andre;
	float felipe,conta,div;
	
	//C�digo
	printf("-----Bar do Banana-----\n\n\n");
	
	printf("Valor total da conta:");
	scanf("%f",&conta);
	
	div=conta/3;
	andre=div;
	carlos=div;
	felipe=(float)conta/3;
	
	//Sa�da
	printf("\n\n-----Ficar� para cada um...-----\n\n");
	printf("Andr� e Calos, devem pagar: R$%i\n",andre,carlos);
	printf("Felipe dever� pagar       : R$%.2f\n\n",felipe);
	
	system("pause");
}
