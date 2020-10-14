#include <stdio.h>

int main(){

float y;
float produto;
float desconto1;
float desconto2;
float desconto3;
desconto1 = y <= 100.00 ? : 1;
desconto2 = y > 100.00 || 500.00 ? : 5;
desconto3 = y > 500.00 ? : 10;


printf("Digite o Valor do Produto: ");
scanf("%f", &produto);
printf("%f\n", desconto1); 
printf("%f\n", desconto2); 
printf("%f\n", desconto3); 


    return 0;
}