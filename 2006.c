#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int T, A, B, C, D, E, ac = 0;
	scanf("%i" , &T);
	scanf("%i %i %i %i %i", &A , &B,&C,&D,&E);
	if (T == A){ ac = ac + 1;}
	if (T == B){ ac = ac + 1;}
	if (T == C){ ac = ac + 1;}
	if (T == D){ ac = ac + 1;}
	if (T == E){ ac = ac + 1;}
	printf("%i\n" , ac);

	return 0;
}
