// considere lidos as variantee 3,3 e 4, o ultimo valor exibido será de :

#include <stdio.h>

int main(void) {
  int v1,v2,v3;
  printf("Digite v1: "); scanf("%d",&v1);
  printf("Digite v2: "); scanf("%d",&v2);
  printf("Digite v3: "); scanf("%d",&v3);

  while (v3 > 1 ) {
    v1 = v1*v2;
    v3 = v3-1;

    printf("%d \t", v1);
  }
  return 0;
}