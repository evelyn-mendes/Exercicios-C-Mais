#include <iostream>

main()
{
	int x,num,mult;
	x= num;
	
	printf("Insira um n�mero natural e diferente de zero: ");
	scanf("%i",&num);
	
	while(x == 1)
	{
		mult= x*num;
		x--;
	}
	printf("\n\nO resultado �:%i",mult);
}
