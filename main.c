#include <stdio.h> // Biblioteca padrão de entrada e saída. Necessária para usar o printf (imprimir) e scanf (ler).

int main() {
    // DECLARAÇÃO DE VARIÁVEIS
    // Aqui estamos "avisando" o computador sobre os dados que vamos guardar.
    // Como são duas cartas, criamos variáveis separadas para a Carta 1 e Carta 2.

    // Variáveis da Carta 1
    char estado1; // 'char' guarda um único caractere (letra).
    char codigo1[4];               // 'char[4]' é uma string (texto). Tamanho 4 para guardar ex: "A01" + o finalizador de texto.
    char cidade1[50];              // Array de caracteres para guardar o nome da cidade (até 49 letras).
    int populacao1;                // 'int' guarda números inteiros (sem vírgula).
    float area1;                   // 'float' guarda números decimais (com vírgula/ponto).
    float pib1;                    // 'float' para o PIB.
    int pontosTuristicos1;         // 'int' para a quantidade de pontos turísticos.

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // LEITURA DOS DADOS - CARTA 1
    printf("Cadastro da Carta 1\n"); // '\n' serve para pular uma linha na tela.

    printf("Digite o Estado (Digite duas letras (ex: SP)): ");
    scanf(" %c", &estado1); // O "%c" lê um caractere. O espaço antes do %c é um truque para ignorar espaços ou "Enters" acidentais do teclado. O '&' indica o endereço de memória da variável.

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1); // "%s" lê um texto sem espaços. Note que para strings (arrays de char) não precisamos usar o '&' no scanf.

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // "%[^\n]" é um truque avançado do scanf para ler frases inteiras (com espaços) até o usuário apertar Enter. O "%s" normal cortaria no primeiro espaço.

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1); // "%d" lê números inteiros (int).

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1); // "%f" lê números decimais (float).

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // ---------------------------------------------------------
    // LEITURA DOS DADOS - CARTA 2
    // ---------------------------------------------------------
    // ---------------------------------------------------------
    // LEITURA DOS DADOS - CARTA 2
    // ---------------------------------------------------------
    printf("\nCadastro da Carta 2\n"); // O \n no começo pula uma linha para não ficar colado.

    printf("Digite o Estado (Digite duas letras (ex: SP)): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // ---------------------------------------------------------
    // EXIBIÇÃO DOS DADOS NA TELA
    // ---------------------------------------------------------
    printf("\n==================================\n");
    printf("DADOS CADASTRADOS\n");
    printf("==================================\n\n");

    // Exibindo Carta 1
    // Para imprimir variáveis com texto no printf, usamos marcadores (como %c, %s, %d, %f)
    // e depois da vírgula colocamos o nome da variável correspondente.
    // "%.2f" serve para limitar o número decimal a apenas 2 casas após a vírgula.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n"); // Pula uma linha entre as cartas

    // Exibindo Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0; // Indica para o sistema operacional que o programa terminou sem erros.
}