#include <iostream>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declara��o de vari�veis
	int hdt,hextra;
	float n1,n2,n3,n4;
	
	//C�digo
	printf("empresa hipotheticusn\n\n");
	
	printf("insira quantas horas voce trabalhou:");
	scanf("%i",&hdt);
	
	printf("insira quantas horas de hora extra voce trabalhou:");
	scanf("%i",&hextra);
	
	n1=hdt*10;
	n2=hextra*15;
	
	n3=n1+n2;
	n4=(1-0.10)*n3;
	
	
	//Sa�da
	printf("Sal�rio bruto: %f",n3);
	
	printf("\n\nSal�rio liquido: %f\n\n",n4);
	
	system("pause");
}
