#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int num,x,soma;
	float media;
	x=1;
	soma=0;
	
	while(x<=5)
	{
		printf("Informe um valor: ");
		scanf("%i",&num);
		soma= soma+num;
		media=(float)soma/x;
		
		if(num < 0)
		{
			printf("\n**A m�dia dos valores �: **%.2f**",media);
			break;
		}
		
		x++;
		
	}
	if (num > 0)
	{
		printf("\n**A m�dia dos valores �: **%.2f**",media);
	}
	
}
