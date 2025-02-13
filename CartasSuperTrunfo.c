#include <stdio.h>

int main() {


// Aqui estao as variaveis das cartas.


   char estado[50];
   char cidade[50]; // nome da cidade
   int populacao;
   float area;
   float pib;
   int pontos_turisticos;
   int codigo; // ex... A01,A02...
   char nome[50];
   float pib_per_capita;
   float densidade_populacional;

//Texto informativo.

    printf("Desafio Super Trunfo Países! \n");

    printf("Cadastro das Cartas! \n");


// Nesta parte e onde o usuario cadastra as informacoes das cartas.


       printf("Digite um Estado: \n");
       scanf("%s", &estado);

       printf("Digite o Codico da Carta: \n");
       scanf("%d", &codigo);

       printf("Digite o nome da Cidade: \n");
       scanf("%s", &cidade);

       printf("Digite o numero da População: \n");
       scanf("%d", &populacao);

       printf("Digite a Area: \n");
       scanf("%f", &area);

       printf("Digite o PIB: \n");
       scanf("%f", &pib);
       
       printf("Digite o numero de pontos Turisticos: \n");
       scanf("%d", &pontos_turisticos);


// aqui sao os conceitos aritimeticos 

      pib_per_capita = (float) pib / populacao;
      densidade_populacional = (float) populacao / area;

// Nessa parte onde mostra as informacoes pro usuario


       printf("Estado: %s \n", estado);
       printf("Codico da Carta: %d \n", codigo);
       printf("Nome da Cidade: %s \n", cidade);
       printf("População: %d \n", populacao);
       printf("Área: %f \n", area);
       printf("PIB: %f \n", pib);
       printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);

       printf("Densidade Populacional: %f \n", densidade_populacional);
       printf("PIB per Capita: %f \n", pib_per_capita);

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste larissa


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
