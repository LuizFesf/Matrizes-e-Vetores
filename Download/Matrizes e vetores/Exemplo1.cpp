#include <stdio.h>
#include <string.h>

int main()
{
    char frase[200];
    int palavras=1;

    printf("Esse programa vai ler a frase que voce digitar, contar e mostrar quantas palavras a frase digitada tem\n\n");
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