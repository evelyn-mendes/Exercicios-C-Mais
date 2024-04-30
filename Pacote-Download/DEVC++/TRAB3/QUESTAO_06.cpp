#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variáveis
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
	
	//Saída
	printf("\nA soma dos valores é: %i",soma);
}
