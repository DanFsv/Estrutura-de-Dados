#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define tam 10

#define tam 4



int main (){

    int p=0, k, pos=0, resultado=9, opcao=0;
    char opcao_alternativa, nome[tam][80], buscar[30];
    
    printf("\n\nDigite o número para executar a função!\n\n");

    do{

       printf("\n\n1 - Insira o Nome: \n\n2 - Ordenar os Nomes\n\n3 - Pesquisar os nomes\n\n4 - Listar os Nomes\n\n5 - Sair do programa.\n\n\n\n");
      scanf("%d", &opcao);
    

        switch(opcao){

            case 1: 

            printf("\n\nDigite o nome:\n\n");
            scanf("%s", nome[pos]);
            pos++;
            break;

            case 2: 
            p = pos;
            InsertSort(nome, p);
            break;

            case 3:

            printf("\n\nDigite o nome que quer buscar na lista!\n\n");
            scanf("%s", buscar);
            resultado = PesquisaBinaria(p, nome, buscar);

                if(resultado==1){
                    printf("\n\nO nome foi encontrado na lista!\n\n");
                }
            
                else{
                    printf("\n\nNome não encontrado na lista...\n\n");    
                }
              
            break;

            case 4:

                if(pos==0){

                    printf("\n\nNão há nomes no vetor!\n\n");
                }

                else{
                    p=pos;
                    for (k=0; k<p; k++){
                        printf("\n%s\n", nome[k]);
                    }
                }
            break;

            case 5:

                printf("\nVocê saiu do programa\n");
            break;

            default:

                printf("\nOcorreu algum erro!\n");
            
            break;




        }
    
    
    
      }
    
    while(opcao<5);
    
    
}