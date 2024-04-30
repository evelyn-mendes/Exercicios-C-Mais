#include <iostream>
//Ler a idade e as opiniões
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração de variáveis
	int x,idade,opiniao;
	float media,soma1,otimo,soma,bom,regular;
	x= 1;
	soma= 0;
	
	printf("TABELA DE AVALIAÇÃO: \n1= Ótimo\n2= Bom\n3= Regular");
	
	while(x<=5)
	{
		printf("\nInforme sua idade...........................: ");
		scanf("%i",&idade);
		printf("Sua opinião sobre o filme: ");
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
	
	printf("\nMédia das idades das pessoas que responderam ótimo.............: %.2f",media);
	printf("\nPessoas que responderam regular................................: %.0f",regular);
	printf("\nPorcentagem de pessoas que respondeu bom entre os entrevistados: %.2f",soma1);
}
