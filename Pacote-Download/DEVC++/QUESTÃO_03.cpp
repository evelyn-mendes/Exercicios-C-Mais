#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o de vari�veis
	int paes,broas;
	float mult1,mult2,soma,n1;
	
	printf("----Padaria Hot-P�o----\n\n\n");
	
	//C�digo
	printf("Quantos p�es franceses arrecadou: ");
	scanf("%i",&paes);
	
	printf("Quantas broas arrecadou: ");
	scanf("%i",&broas);
	
	mult1=paes*0.12;
	mult2=broas*1.50;
	soma=mult1+mult2;
	n1=0.10 * soma;
	
	//Sa�da
	printf("O total de p�es e broas arrecadado, foi: R$%.2f\n\n",soma);
	printf("Valor a ser guardado na poupan�a: R$%.2f\n\n",n1);
	
	system("pause");
}
