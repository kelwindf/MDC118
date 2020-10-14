#include <stdio.h>

int main()
{

  long double giga_em_byt;
  printf("Digite o Valor em GigaBytes aqui: ");
  scanf("%LF", &giga_em_byt);

if (giga_em_byt < 0);
{
    printf("Valor invalido"); 
}
else 
{ 
 printf("%.0LF" em bytes = "%.3LF\n", giga_em_byt, giga_em_byt * 1024 * 1024 * 1024);
}
    

return 0;
}