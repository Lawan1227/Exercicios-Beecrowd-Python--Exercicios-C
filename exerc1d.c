#include <stdio.h>
int main()
{
    float nota[9],soma =0, media, acima =0, maior = -1000, menor = 1000000;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite a nota do %iº aluno: ", i + 1);
        scanf("%g", &nota[i]);
        soma = soma + nota[i];
        media = soma / 10;
        if (nota[i] >= 6.0 )
        {
            acima = acima + 1;
        }
        if (nota[i] > maior)
        {
            maior = nota[i];
        }
        if (nota[i] < menor)
        {
            menor = nota[i];
        }
        
    }
    printf("\nA média dos alunos foram : %.2g\n" , media);
    printf("A quantidade de alunos aprovados foram : %g\n" , acima);
    printf("A maior nota foi: %g\nA menor nota foi: %g", maior , menor);

}
