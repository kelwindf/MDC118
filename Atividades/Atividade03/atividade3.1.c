#include <stdio.h>

int main() {

int numero;
int multiplos;

printf("Informe um numero: ");
scanf("%d", &numero);

multiplos = numero % 3;

if (multiplos == 0){
    printf(" E multiplo de 3\n");
}
else
{
printf("Nao e multiplos de 3\n");
}

 
return 0;
}
