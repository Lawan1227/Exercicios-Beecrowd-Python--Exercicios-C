#include <stdio.h>

int main()
{
	int a, alcool = 0, gaso = 0 , diesel = 0;
	do
	{
		
		scanf("%d", &a);	
		switch(a)
        {
		case 1:
			alcool++;
		break;
		case 2:
			gaso++;
		break;
		case 3:
			diesel++;
		break;
        }
	}while(a !=4);
	printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n" ,alcool, gaso, diesel);

    return 0;
}
