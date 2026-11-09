#include <stdio.h>
int main()
{
    int cem,cemr ,cinq, cinqr, vint,vintr, dez,dezr, cinc,cincr, doi,doir,um,  valor;
   scanf("%d" , &valor);
   cem = valor / 100;
   cemr = valor % 100;

   cinq = cemr / 50;
   cinqr= cemr % 50;

   vint = cinqr / 20;
   vintr = cinqr % 20;

   dez = vintr / 10;
   dezr = vintr % 10;

   cinc = dezr / 5;
   cincr = dezr % 5;

   doi = cincr / 2;
   doir = cincr % 2;

   um = doir / 1;
   


   printf("%d nota(s) de R$ 100,00 \n%d nota(s) de R$ 50,00 \n%d nota(s) de R$ 20,00 \n", cem, cinq, vint);
   printf("%d nota(s) de R$ 10,00 \n%d nota(s) de R$ 5,00 \n%d nota(s) de R$ 2,00 \n%d nota(s) de R$ 1,00\n" , dez, cinc, doi, um);



}
