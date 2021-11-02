#include <stdio.h>
#include <string.h>

int main()
{

   char frase[200];
   int i, f;

   printf("Esse programa ira inverter a frase digitada. exe: Ola, mundo = odnum ,alO\n\n");
   printf("Digite uma frase: ");
   fgets(frase,200,stdin);

   f = strlen(frase);

   for(i = f; i >= 0; i--)
   {
     printf("%c", frase[i]);
   }
   printf("\n");

    return 0;
}