#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração das viriáveis
	int dias,meses,anos;
	
	//Código
	printf("-----NT Construtora-----\n\n\n");
	
	printf("Quantos dias computados sem acidentes:");
	scanf("%i",&dias);
	
	
	meses= dias/30;
	anos= meses/12;
	
	//Saída
	printf("Faz -%i- dias sem acidentes\n",dias);
	printf("Faz -%i- meses sem acidentes\n",meses);
	printf("Faz -%i- anos sem acidentes\n",anos);
	
	system("pause");
}
