#include <iostream>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,maior,filhos,salario,soma,somafilhos;
	float mediasalario,mediafilhos,salario820=0, porcent;
	x= 0;
	soma= 0;
	somafilhos= 0;
	
	while(x <= 5)
	{
		
		printf("Informe o valor de seu salário: ");
		scanf("%i",&salario);
		printf("Informe a quantidade de filhos: ");
		scanf("%i",&filhos);
		
		soma= soma + salario;
		somafilhos= somafilhos + filhos;
		
		if(salario <= 820)
		{
			salario820++;
			
		}
		if(salario > maior)
		{
			maior = salario;	
		}
		x++;
	}
	

	mediasalario=(float)(soma/x); 
	mediafilhos= (float)(somafilhos/x);
	porcent=(float)(salario820/soma*100);
	
	
	printf("\nA média dos salários da população..................: %.2f",mediasalario);
	printf("\nA média dos números de filhos......................: %.2f",mediafilhos);
	printf("\nO maior salário....................................: %i",maior);
	printf("\nA porcentagem de pessoas com salários até R$ 820,00: %.2f",porcent);
}
