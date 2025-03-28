#include <stdio.h>
 
int main() {
    int bispo = 1, rainha = 1; // Introdução das variáveis a se usar

    printf("---- Movimento da primeira peça ----\n"); // Pequena adição para ajudar a separar o movimento de uma peça da outra

    // Loop da torre
    for (int torre = 1; torre <= 5; torre++) { // Declarando o sistema de repetição para serem realizados os movimentos da torre e o limite do loop
        printf("Torre se movimenta uma casa para direira...\n"); // Impressão da mensagem para saber se que o loop está sendo executado corretamente
    }


    printf("---- Movimento da segunda peça ----\n"); // Pequena adição para ajudar a separar o movimento de uma peça da outra

    // Loop do bispo
    while (bispo <= 5) // Sistema de repetição do loop do bispo
    {
        printf("Bispo se movimente uma casa direita, cima...\n"); // Impressão da mensagem para saber se o loop está sendo executado corretamente
        bispo++; // Função de incremento para evitar loop infinito
    }
    
    printf("---- Movimento da terceira peça ----\n"); // Pequena adição para ajudar a separar o movimento de uma peça da outra

    // Loop da rainha
    do
    {
        printf("Rainha se movimenta uma casa para esquerda...\n"); // Impressão da mensagem para saber se o loop está sendo executado corretamente
        rainha++; // Função de incremento para evitar loop infinito
        
    } while (rainha <= 8); // Sistema de repetição do loop da rainha
    

    return 0;
}