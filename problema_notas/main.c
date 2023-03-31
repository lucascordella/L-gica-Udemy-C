#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    media = (double)nota1 + nota2;
    printf("MEDIA = %.2lf\n", media);

    if (media < 60.00){
        printf("REPROVADO");
    }

    return 0;
}
