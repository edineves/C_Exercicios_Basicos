//O programa devera gerar um numero aleatorio de 0 a 10;
//o usuario ira digitar um numero para ver se errou ou acertou o numero do PC
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
 int magico, num;
 magico = rand()%11;
 printf("%d \n\n", magico);
 
printf("Digite um número entre 0 e 10 ");
scanf("%d", &num);

if (num==magico ) printf(" Vc acertou ");
else              printf(" vc errou, tente novamente");

  return 0;
}