#include <stdio.h>
#include <string.h>

int main()
{

   char frase[200];
   int i, f;

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
