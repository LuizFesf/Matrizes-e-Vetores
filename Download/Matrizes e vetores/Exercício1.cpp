#include <stdio.h>
#include <string.h>

int main()
{
    char frase[200];
    int palavras=1;

    printf("Digite uma frase: ");
    fgets(frase,200,stdin);

    for(int i = 0; frase[i] != '\0'; i++)
    {
        if(frase[i] == ' ')
            palavras++;
    }
     printf("\nO numero de palavras na frase digitada e': %d \n",palavras);
    return 0;
}
