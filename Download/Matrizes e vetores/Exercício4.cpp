#include <stdio.h>
#include <string.h>

int main()
{
    char frase[200];
    int i;

    printf("Digite uma frase: ");
    fgets(frase,200,stdin);
    printf("\n");

    for(i = 0; frase[i] != '\0'; i++)
    {
        if(frase[i] == ' ')
        {
            printf("\n");
        }
        else
            printf("%c",frase[i]);
    }
    printf("\n");

    return 0;
}

