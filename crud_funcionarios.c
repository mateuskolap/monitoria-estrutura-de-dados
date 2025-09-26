#include <conio.h>
#include <windows.h>
#include <stdio.h>

typedef struct
{
    int codigo;
    char nome[50];
    char endereco[50];
    char cargo[50];
    char data_admissao[11];
    char telefone[15];
    float salario;
} Funcionario;

typedef struct item {
    struct item *anterior;
    Funcionario *conteudo;
    struct item *proximo;
} Item;

typedef struct {
    Item *inicio;
    Item *fim;
    int tamanho;
} Lista;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void moldura() {
    system("cls"); 

    gotoxy(1, 1);
    for (int i = 1; i < 119; i++) {
        gotoxy(i, 1);
        puts("-");
        gotoxy(i, 4);
        puts("-");
        gotoxy(i, 23);
        puts("-");
        gotoxy(i, 25);
        puts("-");

        if (i < 26) {
            gotoxy(1, i);
            puts("|");
            gotoxy(118, i);
            puts("|");
        }
    }

    gotoxy(1, 1);
    puts("+");
    gotoxy(1, 4);
    puts("+");
    gotoxy(1, 23);
    puts("+");
    gotoxy(1, 25);
    puts("+");
    gotoxy(118, 1);
    puts("+");
    gotoxy(118, 4);
    puts("+");
    gotoxy(118, 23);
    puts("+");
    gotoxy(118, 25);
    puts("+");

    gotoxy(2, 2);
    puts("Crud de Funcionarios");

    gotoxy(2, 24);
    printf("MSG.:");
}

void telaCadastroFinalDaLista(Lista *lista) {
    moldura();

    gotoxy(2, 3);
    puts("Cadastro no inicio da lista");

    gotoxy(4, 11);
    puts("Codigo........:");
    gotoxy(4, 12);
    puts("Nome..........:");
    gotoxy(4, 13);
    puts("Endereco......:");
    gotoxy(4, 14);
    puts("Cargo.........:");
    gotoxy(4, 15);
    puts("Data Admissao.:");
    gotoxy(4, 16);
    puts("Telefone......:");
    gotoxy(4, 17);
    puts("Salario.......:");

    Item *item = (Item *) calloc(1, sizeof(Item));

    gotoxy(19, 11);
    scanf(" %d", &item->conteudo->codigo);

    gotoxy(19, 12);
    fflush(stdin);
    fgets(item->conteudo->nome, sizeof(item->conteudo->nome), stdin);

    gotoxy(19, 13);
    fflush(stdin);
    fgets(item->conteudo->endereco, sizeof(item->conteudo->endereco), stdin);

    gotoxy(19, 14);
    fflush(stdin);
    fgets(item->conteudo->cargo, sizeof(item->conteudo->cargo), stdin);

    gotoxy(19, 15);
    fflush(stdin);
    fgets(item->conteudo->data_admissao, sizeof(item->conteudo->data_admissao), stdin);

    gotoxy(19, 16);
    fflush(stdin);
    fgets(item->conteudo->telefone, sizeof(item->conteudo->telefone), stdin);

    gotoxy(19, 17);
    scanf(" %f", &item->conteudo->salario);

    getch();
}

void telaPrincipal(Lista *lista) {
    int opcao;

    while (1) {
        moldura();

        gotoxy(4, 11);
        puts("1. Cadastrar Funcionario no final da lista");
        gotoxy(4, 12);
        puts("2. Cadastrar Funcionario no inicio da lista");
        gotoxy(4, 13);
        puts("3. Cadastrar Funcionario em uma posicao da lista");
        gotoxy(4, 14);
        puts("4. Remover funcionario do final da lista");
        gotoxy(4, 15);
        puts("5. Remover funcionario do inicio da lista");
        gotoxy(4, 16);
        puts("6. Remover funcionario de uma posicao da lista");
        gotoxy(4, 17);
        puts("7. Alteracao de Cadastro");
        gotoxy(4, 18);
        puts("8. Consultar cadastro");
        gotoxy(4, 18);
        puts("9. Sair");

        gotoxy(8, 24);
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                telaCadastroFinalDaLista(lista);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            default:
                gotoxy(8, 24);
                printf("Digite uma opcao valida!");
                getch();
        }
    }
}

int main() {
    Lista lista;
    lista.inicio = NULL;
    lista.fim = NULL;
    lista.tamanho = 0;

    telaPrincipal(&lista);

    return 0;
}