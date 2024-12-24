#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define altaTemp 20
#define faltaNutri 15
#define excessoUmidade 10
#define radiacaoUltra 5
#define condicaoFavo 10



int main(int argc, char const *argv[])
{

    srand(time(NULL));
    int populacaoInicial, novaPopulacao, populacaoAtual, aleatorio, taxaCrescimento, condicao, ciclos, opcao, i = 0;
// estrutura para controlar as opções do menu
    do
    {
        printf("1 - Nova Simulacao\n2 - Sair do programa\nEscolha uma opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao)
        {
        case 1 :
            printf("Populacao inicial: ");
            scanf("%d", &populacaoAtual);
            fflush(stdin);
            printf("Taxa de crescimento: ");
            scanf("%d", &taxaCrescimento);
            fflush(stdin);
            printf("Numero de ciclos: ");
            scanf("%d", &ciclos);
            fflush(stdin);
            i = 0;

           
// estrutura que irá controlar os ciclos
            while ( i < ciclos)
            {
                novaPopulacao = populacaoAtual + (populacaoAtual * taxaCrescimento)/100;
                populacaoAtual = novaPopulacao;
                aleatorio = rand() % 100 + 1;

                if (populacaoAtual <= 0) {
                    printf("Ciclo %d: A populacao morreu. Processo finalizado.\n", (i+1));
                    break;
                }
// if's utilizados para calcular os intervalos e aplicar as condições                
                if ( aleatorio <= altaTemp)
                {
                   condicao = (populacaoAtual * 30)/100;
                   populacaoAtual -= condicao;
// if utilizado para quebrar o loop caso a população morra                  
                   if ( populacaoAtual <= 0)
                   {
                    printf("A populacao morreu. Processo finalizado.\n");
                        break;
                   } else {
                         printf("Ciclo %d: Populacao = %d (condicao adversa: alta temperatura!)\n", (i+1), populacaoAtual);
                   }
                }else if ( aleatorio <= altaTemp + faltaNutri)
                {
                    condicao = (populacaoAtual * 25)/100;
                    populacaoAtual -= condicao;
                    if (populacaoAtual <= 0)
                    {
                        printf("A populacao morreu. Processo finalizado.\n");
                        break;
                    } else{
                         printf("Ciclo %d: Populacao = %d (condicao adversa: falta de nutrientes!)\n", (i+1), populacaoAtual);

                    }                   

                }else if (aleatorio <= altaTemp + faltaNutri + excessoUmidade)
                {
                    condicao = (populacaoAtual * 20)/100;
                    populacaoAtual -= condicao;
                    if ( populacaoAtual <= 0)
                    {
                        printf("A populacao morreu. Processo finalizado.\n");
                        break;
                    } else {
                       printf("Ciclo %d: Populacao = %d (condicao adversa: excesso de umidade!)\n", (i+1), populacaoAtual); 
                    }

                }else if (aleatorio <= altaTemp + faltaNutri + excessoUmidade + radiacaoUltra)
                {
                    condicao = (populacaoAtual * 50)/100;
                    populacaoAtual -= condicao;
                    if (populacaoAtual <= 0)
                    {
                        printf("A populacao morreu. Processo finalizado.\n");
                        break;
                    } else{
                        printf("Ciclo %d: Populacao = %d (condicao adversa: radiacao ultravioleta!)\n", (i+1), populacaoAtual);
                    }

                }else if (aleatorio <= altaTemp + faltaNutri + excessoUmidade + radiacaoUltra + condicaoFavo)
                {
                    condicao = (populacaoAtual * 20)/100;
                    populacaoAtual += condicao;
                    {
                        printf("Ciclo %d: Populacao = %d (Condicao favoravel!)\n", (i+1), populacaoAtual);

                    }

                } else {
                    condicao = (populacaoAtual * taxaCrescimento)/100;
                    populacaoAtual += condicao;
                    printf("Ciclo %d: Populacao = %d\n", (i+1), populacaoAtual);

                }

               i++; 
                
            }

            printf("Simulacao concluida. Populacao final: %d\n", populacaoAtual);
           
            
            
            break;
        
        case 2:
            break;
        }
        
    } while (opcao != 2);
    


    return 0;
}
