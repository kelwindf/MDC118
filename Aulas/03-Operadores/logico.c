#include <stdio.h>

int main() {
  int x = 30;
  int y = 20;
  int z;

  // Operador E 

 printf("%d\n", x > y );
 printf("%d\n", x - 10 == y );
 printf("%d\n", x > y && x - 10 > y); // falso E qualquer coisa eh falso
 
 
  // Operador OU

 printf("%d\n", x > y );
 printf("%d\n", x - 10 == y );
 printf("%d\n", x > y || x - 10 > y); // verdadeiro OU qualquer coisa eh verdeiro

  // Operador NAO

 printf("%d\n", !(x > y) );
 printf("%d\n", !(x - 10 > y) );
 printf("%d\n", !(x > y || x - 10 > y) ); // Negacao do valor correto
  

    return 0;

}