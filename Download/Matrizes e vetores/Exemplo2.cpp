#include <stdio.h>
#include <string.h>

int main()
{
    char frase[200];
    int i;
    
    printf("Esse programa vai ler a frase que voce digitar e ira substituir as vogais por asterisco (a = *)\n\n");
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
     printf("\n%s",frase);

    return 0;
}