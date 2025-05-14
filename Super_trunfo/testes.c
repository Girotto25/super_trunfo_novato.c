#include <stdio.h>
#include <string.h>

int main() {
    char Nome[50];
    int Idade;

    printf("Digite o seu nome: ");
    fgets(Nome, sizeof(Nome), stdin);

    // Remover o caractere de nova linha '\n' que o fgets pode armazenar
    size_t len = strlen(Nome);
    if (len > 0 && Nome[len - 1] == '\n') {
        Nome[len - 1] = '\0';
    }

    printf("Perfeito %s! Agora digite sua idade: ", Nome);
    scanf("%d", &Idade);

    printf("Certo %s, você tem %d anos!\n", Nome, Idade);

    return 0;
}