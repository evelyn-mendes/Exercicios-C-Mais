#include <iostream>
//Ler um n�mero de at� 3 d�gitos
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o de vari�veis
	int numero,centena,dezena,unidade;
	
	//C�digo
	printf("Digite um n�mero: ");
	scanf("%i",&numero);
	
	
	centena=numero/100;
	dezena= (numero % 100)/10;
	unidade= (numero % 10);
	
	
	//Sa�da
	printf("\n\nCENTENA= %i\n",centena);
	printf("DEZENA= %i\n",dezena);
	printf("UNIDADE= %i\n\n",unidade);
	
	system("pause");
}
