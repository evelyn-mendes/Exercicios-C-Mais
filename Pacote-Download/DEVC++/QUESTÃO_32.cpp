#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o das vari�veis
	float peso,gramas;
	
	//C�digo
	printf("-----Pesador inteligente-----\n\n\n");
	
	printf("Informe seu peso em Kg: ");
	scanf("%f",&peso);
	
	gramas=peso*1000;
	
	//Sa�da
	printf("Seu peso em gramas �: %.2fg\n\n",gramas);
	
	system("pause");
}
