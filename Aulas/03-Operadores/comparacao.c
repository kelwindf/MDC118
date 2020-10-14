#include <stdio.h>

int main() 
{    

    int x = 20;
    int y = 20;
    int z;

     /* maior que */
    z = x > y;
    printf("x > y? %d\n", z);  // 0 e falso e 1 verdadeiro
    
     /* menor e igual */
    z = x <= y;
    printf("x <= y? %d\n", z); // 0 e falso e 1 verdadeiro
    
     /* maior e igual */
    z = x >= y;
    printf("x >= y? %d\n", z); // 0 e falso e 1 verdadeiro
    
     /* menor que */
    z = x < y;
    printf("x < y? %d\n", z); // 0 e falso e 1 verdadeiro
  
     /* igual a */
    z = x == y; /* para igualdade se usa (=) duas vezes: == */
    printf("x = y? %d\n", z);
    
     /* diferente de */
    z = x != y; /* != e a representacao de negacao */ // ! operador logico negacao not 
    printf("x != y? %d\n", z);




    
    
    
    
    return 0;
}