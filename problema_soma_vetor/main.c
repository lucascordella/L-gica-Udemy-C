#include <stdio.h>
#include <stdlib.h>

int main()
{
    double soma, media;
    int N, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    soma = 0;
    for (i = 0; i < N; i++){
        soma = soma + vet[i];
    }
    media = soma / N;

    printf("\nVALORES = ");
    for (i = 0; i < N; i++){
        printf("%.1lf ", vet[i]);
    }
    printf("\nSOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf", media);

    return 0;
}
