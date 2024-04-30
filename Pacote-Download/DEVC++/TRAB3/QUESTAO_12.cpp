#include <iostream>
//Ler 50 números e informar o maior e o menor

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração de variáveis
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
	
	//Saída
	printf("\nO maior valor é: %i",maior);
	printf("\nO menor valor é: %i",menor);
}
