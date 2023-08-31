#include <stdio.h>
#include <locale.h>

int main() {

int level, resposta, escolha, pontos = 0;

do
{
    printf("Bem vindo ao jogo de perguntas e respostas\n");
printf("Escolha um level digitando o número da opção:\n1 fácil\n2 médio\n3 difÍcil\n");
scanf("%d", &level);

switch (level)
{
case 1:
    printf("Você escolheu o nível fácil\n");
    printf("Pergunta 1\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 1){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 2\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 2){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 3\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 3){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 4\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 4){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 5\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 1){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    break;

case 2:
    printf("Você escolheu o nível médio\n");
printf("Pergunta 1\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 1){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 2\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 2){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 3\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 3){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 4\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 4){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 5\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 1){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    break;

case 3:
    printf("Você escolheu o nível difícil\n");
    printf("Pergunta 1\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 1){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 2\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 2){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 3\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 3){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 4\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 4){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    printf("Pergunta 5\nescolha 1\nescolha 2\nescolha 3\nescolha 4\n");
    scanf("%d", &resposta);
    if (resposta == 1){
        printf("Você acertou\n");
        pontos++;
    } 
    else{
        printf("Você errou\n");
    }
    break;

default:
    printf("Opção invalida\n");
    break;
}

printf("Você fez %d pontos\n", pontos);

printf("Deseja continuar?\nDigite 1 para sim\nDigite 2 para não\n");
scanf("%d", &escolha);
} while (escolha == 1);

printf("Obrigado por jogar este jogo\n");
}