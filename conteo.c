#include<stdio.h>
#include<stdlib.h>
int main()
{
  int conteo=0,num;
  printf("\n\t Programa conteo de positivos");
  printf("\n\t Ingrese un numero\t");
  scanf("%i",&num);
  while(num!=0)
  {
     conteo++;
     printf("\n\t Ingrese un numero\t");
     scanf("%i",&num);
  }
  printf("\n\t Usted ingreso %i numeros enteros\n",conteo);
  system("PAUSE");
  return 0;
}
