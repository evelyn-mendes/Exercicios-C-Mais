#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o de vari�veis
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
	
	//Sa�da
	printf("Ser�o necess�rios ** %i ** para que Z� alcance a altura de Chico",ano);
}
