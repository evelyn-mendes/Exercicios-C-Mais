#include <iostream>
//Ler a idade e as opini�es
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o de vari�veis
	int x,idade,opiniao;
	float media,soma1,otimo,soma,bom,regular;
	x= 1;
	soma= 0;
	
	printf("TABELA DE AVALIA��O: \n1= �timo\n2= Bom\n3= Regular");
	
	while(x<=5)
	{
		printf("\nInforme sua idade...........................: ");
		scanf("%i",&idade);
		printf("Sua opini�o sobre o filme: ");
		scanf("%i",&opiniao);
		soma= soma + idade;
		
		if(opiniao == 1)
		{
			otimo++;
			media=(float)(soma/otimo);
		}
		if(opiniao == 3)
		{
			regular++;
		}
		if(opiniao == 2)
		{
			bom++;
			soma1=(float)(x/bom)*100;
		}
		x++;
	}
	
	printf("\nM�dia das idades das pessoas que responderam �timo.............: %.2f",media);
	printf("\nPessoas que responderam regular................................: %.0f",regular);
	printf("\nPorcentagem de pessoas que respondeu bom entre os entrevistados: %.2f",soma1);
}
