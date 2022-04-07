//questão 2

#include <stdio.h>
#include <stdlib.h>


int fib(int n)
{
    int resultado = 0;

    if(n==1)
    {
        return 1;
    }
    
    if(n==2)
    {
        return 1;
    }

    else
    {
        return fib(n-1) + fib(n-2);
    }
    
}


int main(void)
{
    int n = 10;
   
    for (int i = 1; i <= n; i++) {
    printf("%d ", fibonacci(i));

  }
  printf("\n");

}
