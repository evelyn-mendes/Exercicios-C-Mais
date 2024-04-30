#include <iostream>

int main()
{
	//Declaração de variáveis
	int mdm,tempo,soma,massa,x;
	char letra;
	massa=0,25;
	x=1;
	
	printf("Digite S para novo calculo ou qualquer letra para terminar: ");
	scanf("%s",&letra);
	
	while(letra == 's')
	{
		while(x<=1)
		{
			printf("Digite a massa em gramas do material:");
	 		scanf("%i",mdm);
	 		
	 		x++;
		}
	printf("O tempo foi de: %i",soma);	
	x=1;
	}
	
	
	 
	 
}
