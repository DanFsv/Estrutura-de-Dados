#include <stdio.h>
#include <stdlib.h>

int m_d_c(int a, int b)
{
    int c;
    while(b!=0)
    {
        c = a%b;
        a = b;
        b = c;
    }

    return a;
}



int main(void){
    int a, b;

    printf("Escreva dois números: ");
    scanf("%d\n%d", &a, &b);

    printf("\nO MDC entre %d e %d é %d\n\n", a, b, m_d_c(a,b));
