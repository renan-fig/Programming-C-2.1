#include <stdio.h>
#include <math.h>

int main(void) {

int idade, soma=0;
float media;
 for(int i=1; i<=50; i++){

   printf("Digite a idade da %dº pessoa: ", i);
   scanf("%d", &idade);

   soma+=idade;
 }
 media=soma/50;

printf("A idade média é de %.2f", media);
 

  return 0;
}
