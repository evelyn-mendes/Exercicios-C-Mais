#include <iostream>
//Algoritmo que receba duas notas, calcule e mostre a m�dia ponderada
main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declara��o de vari�veis
	int not1,not2;
	float pon1,pon2;
	
	//C�digo
	printf("-----M�DIA PONDERADA-----\n\n\n");
	printf("Insira o valor da primeira nota: ");
	scanf("%i",&not1);
	printf("Insira o valor da segunda nota: ");
	scanf("%i",&not2);
	
	//Peso 2 para a primeira nota e peso 3 para a segunda nota
	pon1=(not1*2)+(not2*3);
	pon2=pon1/(2+3);
	
	//Sa�da
	printf("\nA m�dia ponderada dessas notas ser�..%.2f\n\n",pon2);
	
	system("pause");
}

