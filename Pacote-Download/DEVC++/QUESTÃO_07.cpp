#include <iostream>
//Entrar com o dia e o m�s de uma data
//E informar quantos dias se passaram desde o in�cio do ano
main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declara��o de vari�veis
	int dia,mes,dpassados;
	
	//C�digo
	printf("Informe o dia:");
	scanf("%i",&dia);
	printf("Informe o m�s em n�mero:");
	scanf("%i",&mes);
	
	dpassados= 30*(mes-1)+dia;
	
	//Sa�da
	printf("\n----Passaram-se -%i- dias desde o �nicio do ano----\n\n",dpassados);
	
	system("pause");
}
