#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declara��o de vari�veis
	int x,c,valor,soma;
	x= 1;
	c= 1;
	soma= 0;
	
	while(x <= 5)
	{
		printf("Informe %io valor: ",c);
		scanf("%i",&valor);
		
		soma= soma + valor;
		
		x++;
	}
	
	//Sa�da
	printf("\nA soma dos valores �: %i",soma);
}
