#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração de variáveis
	int paes,broas;
	float mult1,mult2,soma,n1;
	
	printf("----Padaria Hot-Pão----\n\n\n");
	
	//Código
	printf("Quantos pães franceses arrecadou: ");
	scanf("%i",&paes);
	
	printf("Quantas broas arrecadou: ");
	scanf("%i",&broas);
	
	mult1=paes*0.12;
	mult2=broas*1.50;
	soma=mult1+mult2;
	n1=0.10 * soma;
	
	//Saída
	printf("O total de pães e broas arrecadado, foi: R$%.2f\n\n",soma);
	printf("Valor a ser guardado na poupança: R$%.2f\n\n",n1);
	
	system("pause");
}
