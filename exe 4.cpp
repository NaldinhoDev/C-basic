#include <stdio.h>
#include<math.h>

int main() {

   int num1, num2, num3;

   int maior, menor;


   printf("Digite três numeros: ");

   scanf("%d %d %d", &num1, &num2, &num3);

   if (num1 >= num2 && num1 >= num3) {

       maior = num1;

   } else if (num2 >= num1 && num2 >= num3) {

       maior = num2;

   } else {

       maior = num3;

   }

   if (num1 <= num2 && num1 <= num3) {

       menor = num1;

   } else if (num2 <= num1 && num2 <= num3) {

       menor = num2;

   } else {

       menor = num3;

   }


   printf("Maior numero: %d\n", maior);

   printf("Menor numero: %d\n", menor);


   return 0;

}
