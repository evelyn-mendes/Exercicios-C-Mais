#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o de vari�veis
	float n1,n2,n3,mult;
	
	//C�digo
	printf("-----MULTIPLICA��O COM A INSER��O DE 3 N�MEROS-----A\n\n\n");
	printf("Insira o primeiro n�mero: ");
	scanf("%f",&n1);
	
	printf("Insira o segundo n�mero: ");
	scanf("%f",&n2);
	
	printf("Insira um terceiro n�mero: ");
	scanf("%f",&n3);
	
	mult= n1*n2*n3;
	
	//Sa�da
	printf("A multiplica��o dos n�meros � %.2f\n\n",mult);
	
	system("pause");
}
