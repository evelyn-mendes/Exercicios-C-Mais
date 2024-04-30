#include <iostream>
//Entrar com o dia e o mês de uma data
//E informar quantos dias se passaram desde o início do ano
main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variáveis
	int dia,mes,dpassados;
	
	//Código
	printf("Informe o dia:");
	scanf("%i",&dia);
	printf("Informe o mês em número:");
	scanf("%i",&mes);
	
	dpassados= 30*(mes-1)+dia;
	
	//Saída
	printf("\n----Passaram-se -%i- dias desde o ínicio do ano----\n\n",dpassados);
	
	system("pause");
}
