#include <iostream>

int main()
{
	setlocal(LC_ALL,"Portuguese");
	//Declara��o de vari�veis
	int n1;
	float sdf,sm;
	
	//C�digo
	printf("\n\ninsira o valor do salario minimo: ");
	scanf("%f",&sm);
	
	printf("\n\ninsira o valor do salario de um funcionario: ");
	scanf("%f",&sdf);
	
	n1=sdf/sm;
	
	//Sa�da
	printf("\n\nQuantidade de salarios minimos que o funcionario recebe eh: %i\n\n",n1);
	
	system("pause");
}
