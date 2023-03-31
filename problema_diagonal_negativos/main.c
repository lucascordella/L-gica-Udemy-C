#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, quantNeg;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat[N][N];
    for (i = 0; i < N; i++){
        for (j=0; j < N; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("DIAGONAL PRINCIPAL:\n");
    for (i = 0; i < N; i++){
        printf("%d ", mat[i][i]);
    }

    quantNeg = 0;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (mat[i][j] < 0){
                quantNeg = quantNeg + 1;
            }
        }
    }
    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", quantNeg);

    return 0;
}
