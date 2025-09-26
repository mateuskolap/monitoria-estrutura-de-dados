#include <stdio.h>

void lerInformacoes(char nomes[5][50], float salarios[5], int filhos[5], int idades[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Digite os dados: pessoa[%d]\n", i + 1);
        printf("Nome: ");
        fflush(stdin);
        fgets(nomes[i], 50, stdin);
        printf("Salario: ");
        scanf("%f", &salarios[i]);
        printf("Filhos: ");
        scanf("%d", &filhos[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }
}

void consultarDados(char nomes[5][50], float salarios[5], int filhos[5], int idades[5])
{
    float somaSalarios = 0;
    float somaFilhos = 0;
    float maiorSalario = salarios[0];
    int qtdAte3500 = 0;

    

    for (int i = 0; i < 5; i++) {
        somaSalarios += salarios[i];
        somaFilhos += filhos[i];

        if (salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
        }

        if (salarios[i] <= 3500) {
            qtdAte3500++;
        }
    }


}

int main()
{
    char nomes[5][50];
    float salarios[5];
    int filhos[5];
    int idades[5];

    lerInformacoes(nomes, salarios, filhos, idades);

    return 0;
}