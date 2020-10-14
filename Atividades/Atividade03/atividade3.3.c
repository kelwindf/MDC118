#include <stdio.h>

int main() {

int n;
int i;
int fat = 1;

     printf("Informe um valor: ");
     scanf("%d", &n);

     for  (i=n; i>1; i--){
         fat = fat * 1;
     }
     
     printf("O valor do fatorial de %d e %d\n", n, fat);


    return 0;
}