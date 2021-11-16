#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main(void) {

  srand(time(NULL));
  int a,b,c,d;
  int n1,n2,n3,n4;
  int vidas = 3;
  int soma = 0;

  while (vidas > 0 ) {
    soma = 0;
    a = rand( ) % 51;
    b = rand( ) % 51;
    c = rand( ) % 51;
    d = rand( ) % 51;  

    system (" clear ");
    printf(" memorizando os números ");
    printf(" %d %d %d %d", a, b, c, d);
    printf("\n");
    sleep( 2 );
    system(" clear ");   

    printf("Agora é a vez do usuario\n \n");

    printf("Digite o primeiro número: "); 
    scanf("%d",&n1);
    printf("Digite o segundo  número: "); 
    scanf("%d",&n2);
    printf("Digite o terceiro número: "); 
    scanf("%d",&n3);
    printf("Digite o ultimo número: "); 
    scanf("%d",&n4);

    if (a == n1) soma++;
    if (b == n2) soma++;
    if (c == n3) soma++;
    if (d == n4) soma++;

    if (soma == 4) {
        vidas = vidas + 2;
        printf("Acertou todos os numeros e GANHOU 2 vidas \n");
        printf("Pressione uma tecla para continuar.");
        getchar();getchar();        
      }
    
    if (soma == 3) {
        vidas = vidas +1;
        printf("acertou 3 numeros, ganhou uma vida\n ");
        printf("Pressione uma tecla para continuar.");
        getchar();getchar();
       
      }
    if (soma == 2) {
        //vidas = 2;
        printf("Acertou 2 numeros - SEM ALTERAÇÕES em vidas. \n");
        printf("Pressione uma tecla para continuar.");
        getchar();getchar();
       
      }

    if (soma == 1) {
        vidas = vidas - 1;
        printf("Acertou um numero, perderá uma vida \n ");
        printf("Pressione uma tecla para continuar.");
        getchar();getchar();
        if (vidas==0) {
          printf("Você não tem mais vidas \n.");
          printf("GAME OVER");
        }
       
      }
    if (soma == 0) {
       vidas = 0;
       printf("errou todos os numeros \n");
       printf("Pressione uma tecla para continue\n");
       printf("GAME OVER");
       getchar();getchar();
       
      } 
   }  
return 0;
}