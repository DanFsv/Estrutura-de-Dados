#include <stdio.h>
#include <string.h>

void InsertSort(char nome[][80], int p){

    int i, j, r;
    char auxiliar[30];
    
    for( i=0; i<=p-1; i++ ) {

        for( j=i+1; j<=p-1; j++ ) {

            r = strcmp( nome[i], nome[j]);

            if( r > 0 )
            {
                strcpy( auxiliar, nome[i] );
                strcpy( nome[i], nome[j] );
                strcpy( nome[j], auxiliar );

            }
        }
    }         
    
}

    
    


}

int PesquisaBinaria(int p,char nome[][80], char buscar[80]){

    int inicio, meio, fim, res=0;
    InsertSort(nome, p);
    inicio = 0; fim = p-1;

    while(inicio<=fim)
    {
        meio=(inicio+fim)/2;
        if (strcmp(buscar,nome[meio])==0)
        {
            res++;
            return res;
        }

        else if(strcmp(buscar,nome[meio])>0)
        {
            inicio=meio+1;
        }

        else
        {
            fim=meio-1;
        }
    }
        return res;

    
}