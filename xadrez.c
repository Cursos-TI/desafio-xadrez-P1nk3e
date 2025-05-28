#include <stdio.h>

int main() {

    int t, b = 1, r = 1, movimentocavalo = 1;

    printf(">>>TORRE<<<\n");

        for (int t = 1; t <= 5; t++)
        {
            printf("Direita\n");
        }
    
    printf(">>>BISPO<<<\n");

        while (b <= 5)
        {
            printf("Cima\n");
            printf("Direita\n");
            b++;
        }
        
    printf(">>>RAINHA<<<\n");   

        do {
            printf("Esquerda\n");
            r++;
        } while (r <= 8);

    printf(">>>CAVALO<<<\n");

        while (movimentocavalo--)
        {
            for(int movimentocavalo = 0; movimentocavalo < 2; movimentocavalo++){
                printf("Cima\n");
            }
            printf("Direita\n");
        }
        


 return 0;
}