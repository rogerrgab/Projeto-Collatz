/*Cabeçalho padrão da Linguagem C*/
#include <stdio.h>
#include <stdlib.h>

/*Declarando um método que retornará um valor de tipo Inteiro através da variável "n"
 que representa os números naturais(N)*/
int collatz(int n)
{
  printf("%2d ", n);

  /*Usando a estrutura de repetição If/ Else-If e invocando/retornando
   o método de tipo inteiro*/
  /*Declarando que o resultado final tem que ser =1*/
  if (n == 1)
  {
    printf("\n");
    return n;
  }

  /*Se (N) for par, o algoritmo irá calcular "n/2" */
  /*Se (N) for ímpar, o algoritmo irá calcular "(3*n)+1" */
  else
  {
    if ((n % 2) == 0)
      return collatz(n / 2);
    else
      return collatz((3 * n) + 1);
  }
}

/*Pedindo para o usuário digitar um número inteiro maior que zero, para que o algoritmo possa
calcular, chegando assim no resultado final*/
int main()
{
  int n;
  printf("Digite um número inteiro maior que zero para que possa retornar a sequência de Collatz\n");
  scanf("%d", &n);
  collatz(n);

  return 0;
}