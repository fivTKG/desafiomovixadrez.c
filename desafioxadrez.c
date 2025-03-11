#include <stdio.h>

int main(){
    //variaveis
    int torre;
    int bispo = 0;
    int rainha = 0;
    int cavalo = 0;

    printf("\nPeça: Torre! \n");

    //estrutura em for da torre
    for(torre = 0; torre < 5; torre++) 
    {
        printf("Direita\n");
    }

    //estrutura em while do bispo
    printf("\nPeça: Bispo!\n");
    while(bispo < 5)
    {
        printf("Cima, Direita!\n");
        bispo++;
    }

    //estrutura em do while da rainha
    printf("\nPeça: Rainha \n");
    do
    {
        printf("Esquerda!\n");
        rainha++;
    }
    while (rainha < 8);

    //estrutura em while para o cavalo
    printf("\nPeça: Cavalo\n");
    while(cavalo == 0)
        {
        for(int i = 1; i <= 2; i++)
        {
            printf("Baixo!\n");
        }
            printf("Esquerda!\n");
        cavalo++;
        }


return 0;
}