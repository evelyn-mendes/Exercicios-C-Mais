#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o das viri�veis
	int dias,meses,anos;
	
	//C�digo
	printf("-----NT Construtora-----\n\n\n");
	
	printf("Quantos dias computados sem acidentes:");
	scanf("%i",&dias);
	
	
	meses= dias/30;
	anos= meses/12;
	
	//Sa�da
	printf("Faz -%i- dias sem acidentes\n",dias);
	printf("Faz -%i- meses sem acidentes\n",meses);
	printf("Faz -%i- anos sem acidentes\n",anos);
	
	system("pause");
}
