#include <iostream>
//Ler 50 n�meros e informar o maior e o menor

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o de vari�veis
	int x,valores,maior,menor,c;
	x=1;
	maior= valores;
	menor= valores;
	c= 1;
	
	while(x <= 5)
	{
		printf("Informe o %io valor: ",c);
		scanf("%i",&valores);
		
		if(valores > maior)
		{
			maior= valores;
		}
		
		if(valores < menor)
		{
			menor= valores;
		}
		x++;
	}
	
	//Sa�da
	printf("\nO maior valor �: %i",maior);
	printf("\nO menor valor �: %i",menor);
}
