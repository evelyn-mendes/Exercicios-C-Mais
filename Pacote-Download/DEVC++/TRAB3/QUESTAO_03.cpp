#include <iostream>

int main()

{
	//Declara��o de vari�veis
	int num,x=1,nulo,positivo,negativo;
	positivo= 0;
	negativo= 0;
	nulo= 0;
	while(x<=50)
	{
		printf("informe um numero: ");
		scanf("%i",&num);
		
		if(num > 0)
		{
			positivo++;
		}
		if(num <  0)
		{
			negativo++;
		}
		if(num == 0)
		{
			nulo++;
		}	
		x++;		
	}
	
		//Sa�da
		printf("\nnumeros positivos %i",positivo);
		printf("\nnumeros negativos %i",negativo);
		printf("\nnulos %i\n\n",nulo);
	
	system("pause");
}
