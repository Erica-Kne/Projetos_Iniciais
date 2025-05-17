#include <stdio.h>

typedef struct { 
    char nome[30];    
    int quantidade;    
} Ingrediente;

typedef struct {
    char nome[30];
    int ingrediente [7];
    int quantidades [7];
} Pocao;

int main(int argc, char const *argv[])
{   
    Pocao pocao [5] = {
        {"Pocao de cura", {0,1,4,6}, {30,20,20,10}}, 
        {"Pocao Forca da Floresta", {2,3,4}, {30,20,20}},
        {"Pocao Sabedoria da Riqueza",{0,1},{50,30}},
        {"Pocao Sorte no Amor", {3,4,6}, {10,50,5}},
        {"Pocao Malvada", {2,5},{15,10,}}
    };


    Ingrediente ingrediente [7] = {
        {"Po de Fenix", 100},
        {"Essencia Celestial", 50},
        {"Raiz de Dragao", 45},
        {"Orvalho Lunar", 30},
        {"Flores Secas", 200},
        {"Elixir Amargo", 20},
        {"Lagrimas de Unicornio", 15}
    };
    int opcao = 0;
    do{
        printf("Selecione uma opcao:\n");
        printf("1) Consultar Ingredientes Disponiveis\n");
        printf("2) Preparar Pocao\n");
        printf("3) Reabastecer Ingredientes\n");
        printf("4) Sair do Programa\n");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            printf("Ingredientes disponiveis:\n");
            for (int i = 0; i < 7; i++)
            {   
                if ( i == 0 || i == 2 || i == 4){   
                    printf("%d. %s: %d g\n", i +1, ingrediente[i].nome, ingrediente[i].quantidade);  
                }else {
                    printf("%d. %s: %d ml\n", i +1, ingrediente[i].nome, ingrediente[i].quantidade);
                }
            }
            
            break;
        case 2:
            printf("Escolha uma opcao:\n");
            for (int i = 0; i < 5; i++)
            {
                printf("%d. %s\n", i+ 1, pocao[i].nome);
            }
            int escolha = 0;
            scanf("%d", &escolha);
            fflush(stdin);
            escolha --;

            Pocao pocaoF = pocao [escolha];

            int podePreparar = 1;

            for (int i = 0; i < 7; i++) {
                if (pocaoF.quantidades[i] > ingrediente[pocaoF.ingrediente[i]].quantidade) {
                    podePreparar = 0;
                        printf("Ingrediente insuficiente: %s\n", ingrediente[pocaoF.ingrediente[i]].nome);
                        }
                }
                if (podePreparar) {
                    for (int i = 0; i < 7; i++) {
                        ingrediente[pocaoF.ingrediente[i]].quantidade -= pocaoF.quantidades[i];
                    }
                    printf("Pocao criada com sucesso.\n");
                    } else {
                            printf("Nao foi possivel criar a pocao.\n");
                    }
            
            break;
        case 3:
             printf("Escolha um ingrediente para reabastecer:\n");
                for (int i = 0; i < 7; i++) {
                    printf("%d. %s: %d\n", i + 1, ingrediente[i].nome, ingrediente[i].quantidade);
                }

                int reabastecer = 0;
                scanf("%d", &reabastecer);
                fflush(stdin);
                reabastecer --;

                int quantidade = 0;
                printf("Digite a quantidade a adicionar: \n");
                scanf("%d", &quantidade);
                fflush(stdin);

                ingrediente[reabastecer].quantidade += quantidade;

                if ( reabastecer == 0 ||reabastecer == 2 || reabastecer == 4){   
                    printf("Ingrediente atualizado: %s %d g\n",ingrediente[reabastecer].nome, ingrediente[reabastecer].quantidade);  
                }else {
                    printf("Ingrediente atualizado: %s %d ml\n",ingrediente[reabastecer].nome, ingrediente[reabastecer].quantidade);
                }

            break;
        case 4:
            printf("Programa encerrado.\n");
            break;
        
        default:
            printf("Opcao invalida. Tente novamente:\n");
        }

    } while (opcao != 4 );
    return 0;
}
