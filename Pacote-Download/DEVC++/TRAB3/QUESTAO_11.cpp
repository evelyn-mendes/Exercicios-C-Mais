#include <iostream>
//M�dia arirm�tica de n�meros pares e terminar a leitura quando digitado zero
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o de vari�veis
	int x,num,c,soma;
	float media;
	x= 0;
	c=2;
	soma=0;
	
	printf("Informe o 1o n�mero: ",c);
	scanf("%i",&num);
	
	while(num > 0)
	{
		if(num%2==0)
		{
			printf("Informe o %io n�mero: ",c);
			scanf("%i",&num);
			soma= soma + num;
		}
		x++;
		c++;
	}
	
	//Sa�da
	if(num == 0)
	{
		printf("\nValores n�o fornecidos");
	}
	else
	{
		media=(float)soma/x;
	
	printf("\nA m�dia dos n�mero �: %.2f\n\n",media);
	}
	
	system("pause");
	
}
