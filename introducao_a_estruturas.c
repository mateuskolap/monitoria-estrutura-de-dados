#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[100];
    char data_nascimento[11];
    char endereco[100];
    int cpf;
} Cliente;

typedef struct item
{
    Cliente *conteudo;
    struct item *prox_estrutura;
} Item;

typedef struct
{
    Item *inicio;
    Item *final;
} Lista;

int main()
{
    Lista *lista = (Lista *) calloc(1, sizeof(Lista));

    lista->inicio = NULL;
    lista->final = NULL;

    Item *item1 = (Item *) calloc(1, sizeof(Item));

    Cliente *cliente = (Cliente *) calloc(1, sizeof(Cliente));

    cliente->nome

    item1->conteudo = 

    return 0;
}