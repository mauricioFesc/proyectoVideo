#include<stdio.h>
#include<stdlib.h>
int main()
{
  int conteop,conteon,num;
  char dato;
  printf("\n\t Programa conteo de positivos y negativos");
  do
  {
    conteop=0;
    conteon=0;
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
    fflush(stdin);
    printf("\n\t Desea hacer otro conteo? s/n\t");
    scanf("%c",&dato);
  }while(dato=='s' || dato=='S');
  system("PAUSE");
  return 0;
}
