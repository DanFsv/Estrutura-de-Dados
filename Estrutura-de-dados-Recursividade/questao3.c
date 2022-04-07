#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char inverter(char str[], int lenght)
{
    if(lenght==1)
    {
        return string[0];
    }

    else
    {

        return string[len-1];

    }
}


int main(void){
    
    char str[20];
    printf("Escreva uma string: ");
    scanf("%s", str);

    int tam = strlen(str);
    for (; tam!=0; tam--)
    {
    printf("%c", inverter(str, tam));
    }

    printf("\n");