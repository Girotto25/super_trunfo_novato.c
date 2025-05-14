#include <stdio.h>
int main() {
    int idade, matricula;
    float altura;
    char nome[60];

    printf("Seja bem vindo, nos diga o seu nome: \n");
    scanf("%s", nome);

    printf("Por favor nos informe a sua matricula: \n");
    scanf("%s", &matricula);

    printf("Perfeito agora me diga a sua idade: \n");
    scanf("%d", &idade);

    printf("Me conte sua altura: \n");
    scanf("%.2f", &altura);

    printf("então seguimos com o seu cadastro \n");
    printf("Nome do aluno: %s\n ", nome);
    printf("Altura: %f\n ", altura);
    printf("Idade: %d\n", idade);
    printf("Matricula: %d\n", matricula);





}