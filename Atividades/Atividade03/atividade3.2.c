#include <stdio.h>

int main() {

 int x = 0;
 int y = 1;
 int aux;
 int i;
 int numRepeticoes;

 printf("Digite o numero de repeticoes: ");
 scanf("%d", &numRepeticoes);

 printf("%d\n", y);

 for (i = 0; i < numRepeticoes; i++){
     aux = x + y;
     x = y;
     y = aux;

     printf("%d\n", aux);
 }


    return 0;
}