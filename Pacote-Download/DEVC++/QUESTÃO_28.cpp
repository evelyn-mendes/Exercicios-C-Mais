#include <iostream>
//Algoritmo que receba duas notas, calcule e mostre a média ponderada
main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variáveis
	int not1,not2;
	float pon1,pon2;
	
	//Código
	printf("-----MÉDIA PONDERADA-----\n\n\n");
	printf("Insira o valor da primeira nota: ");
	scanf("%i",&not1);
	printf("Insira o valor da segunda nota: ");
	scanf("%i",&not2);
	
	//Peso 2 para a primeira nota e peso 3 para a segunda nota
	pon1=(not1*2)+(not2*3);
	pon2=pon1/(2+3);
	
	//Saída
	printf("\nA média ponderada dessas notas será..%.2f\n\n",pon2);
	
	system("pause");
}

