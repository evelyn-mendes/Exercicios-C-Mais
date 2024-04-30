#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração das variáveis
	float peso,gramas;
	
	//Código
	printf("-----Pesador inteligente-----\n\n\n");
	
	printf("Informe seu peso em Kg: ");
	scanf("%f",&peso);
	
	gramas=peso*1000;
	
	//Saída
	printf("Seu peso em gramas é: %.2fg\n\n",gramas);
	
	system("pause");
}
