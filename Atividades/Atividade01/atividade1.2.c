#include <stdio.h>

int main () {

int segundos;
int minutos; 
int horas;

printf("Digite o Valor em Segundos\n");
scanf("%i", &segundos);
{
horas = segundos / 3600;
minutos = (segundos - (horas * 3600) ) / 60;
segundos = segundos - (horas * 3600) - (minutos * 60);
printf(" O valor em Horas e:%i\n", horas);
printf(" O valor em Minutos e:%i\n", minutos);
printf(" O valor em Segundos e:%i\n", segundos);
}
 return 0; 

}