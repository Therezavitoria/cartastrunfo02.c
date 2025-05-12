#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de país
struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade; // populacao / area
};

// Função para exibir os atributos disponíveis
void mostrarAtributos(int atributoSelecionado) {
    printf("Escolha um atributo para comparação:\n");
    if (atributoSelecionado != 1) printf("1 - População\n");
    if (atributoSelecionado != 2) printf("2 - Área\n");
    if (atributoSelecionado != 3) printf("3 - PIB\n");
    if (atributoSelecionado != 4) printf("4 - Pontos Turísticos\n");
    if (atributoSelecionado != 5) printf("5 - Densidade Demográfica\n");
}

// Função para obter valor do atributo
float obterValor(struct Carta c, int atributo) {
    switch (atributo) {
        case 1: return (float)c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return (float)c.pontos_turisticos;
        case 5: return c.densidade;
        default: return 0.0;
    }
}

// Função para exibir nome do atributo
const char* nomeDoAtributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

int main() {
    // Duas cartas pré-definidas
    struct Carta carta1 = {"Brasil", 213000000, 8516000.0, 1868000000000.0, 50, 0.0};
    struct Carta carta2 = {"Argentina", 45380000, 2780000.0, 491000000000.0, 30, 0.0};

    // Calculando a densidade demográfica
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    int atributo1 = 0, atributo2 = 0;

    // Escolha do primeiro atributo
    do {
        mostrarAtributos(0);
        printf("Digite o número do primeiro atributo: ");
        scanf("%d", &atributo1);
    } while (atributo1 < 1 || atributo1 > 5);

    // Escolha do segundo atributo (diferente do primeiro)
    do {
        mostrarAtributos(atributo1);
        printf("Digite o número do segundo atributo: ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1)
            printf("Você já escolheu esse atributo. Escolha outro.\n");
    } while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1);

    // Pegando valores para os dois atributos
    float valor1_c1 = obterValor(carta1, atributo1);
    float valor2_c1 = obterValor(carta1, atributo2);
    float valor1_c2 = obterValor(carta2, atributo1);
    float valor2_c2 = obterValor(carta2, atributo2);

    // Comparações individuais (regra especial para densidade)
    int pontos_c1 = 0, pontos_c2 = 0;

    if (atributo1 == 5) {
        (valor1_c1 < valor1_c2) ? pontos_c1++ : (valor1_c2 < valor1_c1) ? pontos_c2++ : 0;
    } else {
        (valor1_c1 > valor1_c2) ? pontos_c1++ : (valor1_c2 > valor1_c1) ? pontos_c2++ : 0;
    }

    if (atributo2 == 5) {
        (valor2_c1 < valor2_c2) ? pontos_c1++ : (valor2_c2 < valor2_c1) ? pontos_c2++ : 0;
    } else {
        (valor2_c1 > valor2_c2) ? pontos_c1++ : (valor2_c2 > valor2_c1) ? pontos_c2++ : 0;
    }

    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("País 1: %s\n", carta1.nome);
    printf("%s: %.2f\n", nomeDoAtributo(atributo1), valor1_c1);
    printf("%s: %.2f\n", nomeDoAtributo(atributo2), valor2_c1);
    printf("Soma dos Atributos: %.2f\n\n", soma_c1);

    printf("País 2: %s\n", carta2.nome);
    printf("%s: %.2f\n", nomeDoAtributo(atributo1), valor1_c2);
    printf("%s: %.2f\n", nomeDoAtributo(atributo2), valor2_c2);
    printf("Soma dos Atributos: %.2f\n\n", soma_c2);

    if (soma_c1 > soma_c2)
        printf("Vencedor: %s\n", carta1.nome);
    else if (soma_c2 > soma_c1)
        printf("Vencedor: %s\n", carta2.nome);
    else
        printf("Empate!\n");

    return 0;
}
