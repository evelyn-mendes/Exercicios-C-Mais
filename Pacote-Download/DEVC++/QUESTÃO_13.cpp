#include <iostream>
//Ler um número de até 3 dígitos
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração de variáveis
	int numero,centena,dezena,unidade;
	
	//Código
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	
	centena=numero/100;
	dezena= (numero % 100)/10;
	unidade= (numero % 10);
	
	
	//Saída
	printf("\n\nCENTENA= %i\n",centena);
	printf("DEZENA= %i\n",dezena);
	printf("UNIDADE= %i\n\n",unidade);
	
	system("pause");
}
