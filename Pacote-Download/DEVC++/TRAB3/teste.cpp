#include <iostream>
//Ler a idade e as opini�es
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o de vari�veis
	int x,bom,regular,idade;
	float media,soma1,otimo;
	char opiniao[30];
	x= 1;
	media= 0;
	
	while(x<=5)
	{
		printf("Informe sua idade...........................: ");
		scanf("%i",&idade);
		printf("Sua opini�o sobre o filme(otimo,bom,regular): ");
		scanf("%s",&opiniao);
		
		if(opiniao == 1)
		{
			otimo++;
			media=(float)(media + idade)/otimo;
		}
		if(opiniao == 2)
		{
			regular++;
		}
		if(opiniao == 3)
		{
			bom++;
			soma1=(float)(x/bom)*100;
		}
		x++;
	}
	
	printf("\nM�dia das idades das pessoas que responderam �timo.............: %f",media);
	printf("\nPessoas que responderam regular................................: %i",regular);
	printf("\nPorcentagem de pessoas que respondeu bom entre os entrevistados: %f",soma1);
}
