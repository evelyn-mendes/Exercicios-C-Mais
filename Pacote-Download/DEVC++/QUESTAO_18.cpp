#include <iostream>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variáveis
	int hdt,hextra;
	float n1,n2,n3,n4;
	
	//Código
	printf("empresa hipotheticusn\n\n");
	
	printf("insira quantas horas voce trabalhou:");
	scanf("%i",&hdt);
	
	printf("insira quantas horas de hora extra voce trabalhou:");
	scanf("%i",&hextra);
	
	n1=hdt*10;
	n2=hextra*15;
	
	n3=n1+n2;
	n4=(1-0.10)*n3;
	
	
	//Saída
	printf("Salário bruto: %f",n3);
	
	printf("\n\nSalário liquido: %f\n\n",n4);
	
	system("pause");
}
