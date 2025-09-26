#include <stdio.h>
#include <windows.h>
#include <conio.h>

void escreveInformacoes()
{
    printf("Opcao 1: Continuar\n");
    printf("Opcao 2: Voltar para o menu principal\n");

    printf("Digite a sua opcao, na tela 1: ");
}

void opcao1()
{
    int opcao = 0;

    do
    {
        system("cls");

        escreveInformacoes();

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Continuando na tela!");
            getch();
            continue;
            break;
        case 2:
            printf("Saindo... Pressione enter...");
            getch();
            break;
        default:
            printf("Voce digitou uma opcao errada!");
            getch();
            break;
        }
    } while (opcao != 2);
}

int main()
{
    int opcao = 0;
    do
    {
        system("cls");

        printf("Esse é o menu principal, digite uma opcao\n");
        printf("Opcao 1\n");
        printf("Opcao 2\n");
        printf("Opcao 0: Sair\n");

        printf("Digite a sua opcao: ");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            opcao1();
            break;
        case 2:
            break;
        case 0:
            printf("Saindo do programa...");
            break;
        default:
            printf("Voce digitou uma opcao invalida\n");
            getch();
            break;
        }
    } while (opcao != 0);

    return 0;
}