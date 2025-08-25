#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
float a, b, res;
char  opcao;

printf("digite um numero:");
scanf("%f", &a );

 printf("Digite o operador (+, -, *, /): ");
 scanf(" %c", &opcao);

printf("digite outro numero:");
scanf("%f", &b );

   switch (opcao) {
      case '+':
         res = a + b;
         break;
      case '-':
         res = a - b;
         break;
      case '*':
         res = a * b;
         break;
      case '/':
         if (b == 0) {
            printf("Erro: divisao por zero");
            return 1;
         } else {
            res = a / b;
         }
         break;
      default:
         printf("Operador invalido");
         return 1;
   }

   printf("O resultado e: %.2f", res);
   printf(" O sinal escolhido foi %c: ", opcao);
   return 0;
}
