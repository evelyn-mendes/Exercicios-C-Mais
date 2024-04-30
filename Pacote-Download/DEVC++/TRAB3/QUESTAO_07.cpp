#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração de variáveis
	int ano;
	float alturaze,alturachico;
	ano= 0;
	alturaze= 1.1;
	alturachico= 1.5;
	
	while(alturaze <= alturachico)
	{
		
		alturaze= alturaze + 0.03;
		alturachico= alturachico + 0.02;
		
		ano++;
	}
	
	//Saída
	printf("Serão necessários ** %i ** para que Zé alcance a altura de Chico",ano);
}
