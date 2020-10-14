#include <stdio.h>

int main() {


printf("Digite de 1 a 5 o nivel da sua satisfacao de atendimento: ");
char opcao = getchar();
switch(opcao){
     case '1': printf("Ruim\n"); break;
     case '2': printf("Insuficiente\n"); break;
     case '3': printf("Suficiente\n"); break;
     case '4': printf("Bom\n"); break;
     case '5': printf("Otimo\n"); break;
     default: printf("Opcao invalida\n"); break;
}

 return 0;
}