#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// utilizei estes macros para armazenar melhor o tamanho maximo das minhas strings
// em tempo de compilação eles são substituidos pelo valor definido à frente
#define CODIGO_CIDADE_LEN 10
#define NOME_CIDADE_LEN 20

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

	// declarando variaveis para armazenamento das duas cartas
	// optei por sinalizar as variaveis referentes à segunda carta com 2 na frente
	char estado, estado2;
	// macros serão substituidos em tempo de compilação por 10
	char codigoCarta[CODIGO_CIDADE_LEN], codigoCarta2[CODIGO_CIDADE_LEN];
	// macros serão substituidos em tempo de compilação por 20
	char nomeCidade[NOME_CIDADE_LEN], nomeCidade2[NOME_CIDADE_LEN];
	int populacaoCidade, populacaoCidade2;
	float areaCidade, areaCidade2;
	float pibCidade, pibCidade2;
	int pontosTuristicosCidadeQTD, pontosTuristicosCidadeQTD2;
    float densidadePopulacional, densidadePopulacional2;
    float pibPerCapita, pibPerCapita2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
	printf("-----Cadastro CARTA 1 -----\n");

	printf("Insira o estado: \n");
	scanf("%c", &estado);

	printf("Insira o codigo da carta (maximo %d characteres): \n", CODIGO_CIDADE_LEN);
	scanf("%s", codigoCarta);

	printf("Insira o nome da cidade (maximo %d characteres): \n", NOME_CIDADE_LEN);
	scanf("%s", nomeCidade);

	printf("Insira a população da cidade: \n");
	scanf("%d", &populacaoCidade);

	printf("Insira a area da cidade: \n");
	scanf("%f", &areaCidade);

	printf("Insira o pib da cidade (em bilhões): \n");
	scanf("%f", &pibCidade);

	printf("Insira quantos pontos turisticos a cidade tem: \n");
	scanf("%d", &pontosTuristicosCidadeQTD);

    // calculando densidade populacional carta 1
    densidadePopulacional = populacaoCidade / areaCidade;
    // calculando pib per capita carta 1
    pibPerCapita = pibCidade / populacaoCidade;

	// leitura da segunda carta
	printf("\n-----Cadastro CARTA 2 -----\n");

	// precisei resetar a leitura para que não ocorresse um bug
	// onde a leitura do estado da segunda carta é pulada
	// Para reproduzir o bug remova as duas linhas seguintes
	// leitura para capturar caractere fantasma
	scanf("%c", &estado2);
	// reset de variavel para não guardar lixo
	estado2 = '\0';

	printf("Insira o estado: \n");
	scanf("%c", &estado2);

	printf("Insira o codigo da carta (maximo %d characteres): \n", CODIGO_CIDADE_LEN);
	scanf("%s", codigoCarta2);

	printf("Insira o nome da cidade (maximo %d characteres): \n", NOME_CIDADE_LEN);
	scanf("%s", nomeCidade2);

	printf("Insira a população da cidade: \n");
	scanf("%d", &populacaoCidade2);

	printf("Insira a area da cidade: \n");
	scanf("%f", &areaCidade2);

	printf("Insira o pib da cidade (em bilhões): \n");
	scanf("%f", &pibCidade2);

	printf("Insira quantos pontos turisticos a cidade tem: \n");
	scanf("%d", &pontosTuristicosCidadeQTD2);
    
    // calculando densidade populacional carta 2
    densidadePopulacional2 = populacaoCidade2 / areaCidade2;
    // calculando pib per capita carta 2
    pibPerCapita2 = pibCidade2 / populacaoCidade2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
	printf("\n----- CARTAS CADASTRADAS -----\n");

	printf("Carta 1:\n");
	printf("Estado: %c\n", estado);
	printf("Código: %s\n", codigoCarta);
	printf("Nome da Cidade: %s\n", nomeCidade);
	printf("População: %d\n", populacaoCidade);
	printf("Área: %.2f km2\n", areaCidade);
	printf("PIB: %.2f bilhões de reais\n", pibCidade);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidadeQTD);    
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

	printf("\nCarta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", codigoCarta2);
	printf("Nome da Cidade: %s\n", nomeCidade2);
	printf("População: %d\n", populacaoCidade2);
	printf("Área: %.2f km2\n", areaCidade2);
	printf("PIB: %.2f bilhões de reais\n", pibCidade2);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidadeQTD2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);



    return 0;
}
