#include <iostream>
//Média arirmética de números pares e terminar a leitura quando digitado zero
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração de variáveis
	int x,num,c,soma;
	float media;
	x= 0;
	c=2;
	soma=0;
	
	printf("Informe o 1o número: ",c);
	scanf("%i",&num);
	
	while(num > 0)
	{
		if(num%2==0)
		{
			printf("Informe o %io número: ",c);
			scanf("%i",&num);
			soma= soma + num;
		}
		x++;
		c++;
	}
	
	//Saída
	if(num == 0)
	{
		printf("\nValores não fornecidos");
	}
	else
	{
		media=(float)soma/x;
	
	printf("\nA média dos número é: %.2f\n\n",media);
	}
	
	system("pause");
	
}
