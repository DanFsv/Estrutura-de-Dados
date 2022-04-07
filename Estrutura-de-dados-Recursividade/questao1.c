//questão 1

#include <stdio.h>
#include <stdlib.h>


int pot(int x, int y)
{
    int resultado, contador;
    if (y == 0)
    {
        res = 1;
    }

    else
    {
        resultado = x * potencia(x, y-1);
    }
    return res;
}


int main(void)
{
    int num, res, exp;

    printf("Digite um número:");
    scanf("%i", &num);
    printf("Qual a potencia? ");
    scanf("%i", &exp);
    resultado = pot(numero, expoente);
    printf("O resultado será: %i\n\n", resultado);

}
