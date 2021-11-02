#include <stdio.h>
#include <string.h>

int main()
{
    char frase[200], palavra[200];
    int i, j=0, x=0;

    printf("Digite uma frase: ");
    fgets(frase,200,stdin);
    printf("\n");

    for(i = 0; frase[i] != '\0'; i++)
    {
        if(frase[i] == ' ')
        {
            while (x < i)
            {
                palavra[j] = frase[x];
                j++;
                x++;
            }
            palavra[j] = '\0';
            j=0;
            x++;
            printf("%s %s ", palavra, palavra);
        }
    }

    while (x < i-1)
    {
        palavra[j] = frase[x];
        j++;
        x++;
    }

    palavra[j] = '\0';
    printf("%s %s ", palavra, palavra);
    printf("\n");

    return 0;
}
