#include <stdio.h>
#include <string.h>

int main()
{
    char frase[200];
    int i;

    printf("Digite uma frase: ");
    fgets(frase,200,stdin);

    for(i = 0; frase[i] != '\0'; i++)
    {
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
        frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
        {
            frase[i] = '*';
        }
    }
     printf("\n%s\n",frase);

    return 0;
}
