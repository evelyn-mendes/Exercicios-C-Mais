#include <iostream>
//Calcular votos
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração de variáveis
	int voto,x;
	float soma1,soma2,soma3,soma4,soma5,soma6;
	x= 1;
	soma1= 0;
	soma2= 0;
	soma3= 0;
	soma4= 0;
	soma5= 0;
	soma6= 0;
	
	printf("TABELA DE VOTOS:\n**1,2,3,4= Número respectivo aos candidatos**\n**5= Voto nulo**\n**6= Voto em branco**\n\n");
	while(x <= 6)
	{
		printf("Informe seu voto com o número respectivo: ");
		scanf("%i",&voto);
		
		if(voto == 1)
		{
			soma1++;
		}
		
		if(voto == 2)
		{
			soma2++;
		}
		
		if(voto == 3)
		{
			soma3++;
		}
		
		if(voto == 4)
		{
			soma4++;
		}
		
		if(voto == 5)
		{
			soma5++;
		}
		
		if(voto == 6)
		{
			soma6++;
		}
		x++;
	}
	
	//Saída
	printf("Total de votos para cada candidato: \n1= %.2f\n2= %.2f\n3= %.2f\n4= %.2f",soma1,soma2,soma3,soma4);
	printf("\nTotal de votos nulos(5): %.2f",soma5);
	printf("\nTotal de votos em branco(6): %.2f",soma6);
}
