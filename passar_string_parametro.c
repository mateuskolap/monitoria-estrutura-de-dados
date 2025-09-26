#include <stdio.h>
#include <string.h>

void alterarTexto(char texto_para_alterar[20])
{
    printf("Digite outro texto para alterar: ");
    fflush(stdin);
    fgets(texto_para_alterar, 20, stdin);
}

int main()
{
    char texto[20];

    printf("Digite um texto de no maximo 20 caracteres: ");
    fflush(stdin);
    fgets(texto, sizeof(texto), stdin);

    printf(" %s", texto);

    alterarTexto(texto);

    printf(" %s", texto);

    return 0;
}