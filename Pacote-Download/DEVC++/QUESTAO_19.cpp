#include <iostream>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variáveis
	int ci;
	float n1,n2,n3;
	
	
	//Código
	printf("-----Granja frangotech-----\n\n");
	
	printf("\n\nQuantos frangos ha na granja: ");
	scanf("%i",&ci);
	
	n1=ci*4.00;
	n2=(3.50*2)*ci;
	n3=n1+n2;
	
	
	//Saída
	printf("\n\nO gasto total para granja, marcando todos os seus frangos: %f\n\n",n3);
	
	system("pause");
	
}
