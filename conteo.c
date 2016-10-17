#include<stdio.h>
#include<stdlib.h>
int main()
{
  int conteop=0,conteon=0,num;
  printf("\n\t Programa conteo de positivos y negativos");
  printf("\n\t Ingrese un numero\t");
  scanf("%i",&num);
  while(num!=0)
  {
     if(num>0)
     {
       conteop++;
     }
     else
     {
       conteon++;
     }

     printf("\n\t Ingrese un numero\t");
     scanf("%i",&num);
  }
  printf("\n\t Usted ingreso %i numeros enteros positivos y %i negativos\n",conteop,conteon);
  system("PAUSE");
  return 0;
}
