#include <stdio.h>
int main()
{
    int a = 1;
    int n1; 
    int posi = 0;
    int nega =0;

    while ( a != 0)
    {
    printf("Digite um número:");
    scanf("%i" , &n1);
    if ( n1 > 0)
    {
        posi = posi + 1;
        //positivos contador
    }
    else if (n1 <0)
    {
        nega = nega + 1;
        //negativo contador
    }
    else if( n1 == 0 )
    {
        a = 0;
    } 
       }
    printf("Foram digitados %i numeros positivos e %i numeros negativos" , posi , nega);

    
}
