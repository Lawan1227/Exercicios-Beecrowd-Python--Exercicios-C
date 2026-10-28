#include <stdio.h>
int main()

{
float pri, segu;
int op;
while( op != 0)
{
    printf("===========CALCULADORA===========\n1 — Somar dois números.\n2 — Subtrair dois números.\n3 — Multiplicar dois números.\n4 — Dividir dois números.\n0 — Sair. ");
    printf("\nEscolha uma opção: ");
    scanf("%i" , &op);
    switch(op)
    {
        case 1:
            printf("Digite o primeiro numero: ");
            scanf("%g" , &pri);
            printf("Digite o segundo numero: ");
            scanf("%g" , &segu);
            float soma = pri + segu;
            printf("A Soma dos dois numeros eh: %g\n\n" , soma);
        case 2:
            printf("Digite o primeiro numero: ");
            scanf("%g" , &pri);
            printf("Digite o segundo numero: ");
            scanf("%g" , &segu);
            float sub = pri - segu;
            printf("A Subtracao dos dois numeros eh: %g\n\n" , sub);
        case 3:
            printf("Digite o primeiro numero: ");
            scanf("%g" , &pri);
            printf("Digite o segundo numero: ");
            scanf("%g" , &segu);
            float multi = pri * segu;
            printf("A Multiplicacao dos dois numeros eh: %g\n\n" , multi);
        case 4:
            printf("Digite o primeiro numero: ");
            scanf("%g" , &pri);
            printf("Digite o segundo numero: ");
            scanf("%g" , &segu);
            if ( segu != 0 ){
                float divi = pri / segu;
                printf("A Divisao dos dois numeros eh: %g\n\n" , divi);
            }
            else{
                printf("Divisao nao pode ser feita\n\n");
            }

    }       
    
}



}
