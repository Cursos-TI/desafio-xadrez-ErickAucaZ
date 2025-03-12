#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movertorre(int torre){ //recursividade para o movimento da torre
    if (torre > 0){
        printf("Direita!\n");
        movertorre(torre - 1);
    }
}
    void moverbispo(int bispo){ // recursividade para o movimento do bispo usando loop aninhado
    for(int i = 0; i < bispo; i++){
        for(int j = 0; j < 1; j++){
            printf("Direita e ");
        }
        printf("Cima!\n");
    }
    
}
    void moverrainha(int rainha){ // recursividade para o movimento da rainha
    if(rainha > 0){
        printf("Esquerda!\n");
        moverrainha(rainha - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("== Peça: Torre! ==\n");
    movertorre(5); // imprime o que foi pedido no movertorre, de acordo da quantidades que está nos ().

    printf("\n== Peça: Bispo! ==\n"); // imprime o que foi pedido no moverbispo, de acordo da quantidades que está nos ().
    moverbispo(5);

    printf("\n== Peça: Rainha ==\n"); // imprime o que foi pedido no moverrainha, de acordo da quantidades que está nos ().
    moverrainha(8);

    printf("\n== Peça: Cavalo ==\n"); 
    for(int i = 0; i < 3; i++){ // um loop para imprimir o movimento do cavalo, usando continue e break para facilitar.
        if(i < 2){
            printf("Cima!\n");
            continue;
        }
        printf("Direita!\n");
        break;
    }

    return 0;
}