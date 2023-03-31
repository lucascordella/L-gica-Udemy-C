#include <stdio.h>
#include <math.h>

int main()
{
    double coA, coB, coC, delta, x1, x2;

    printf("Coeficiente a: ");
    scanf("%lf", &coA);
    printf("Coeficiente b: ");
    scanf("%lf", &coB);
    printf("Coeficiente c: ");
    scanf("%lf", &coC);

    delta = coB * coB - 4 * coA * coC;

    if (delta < 0 || coA == 0) {
        printf("Essa equacao nao possui raizes reais\n");
    }
    else {
        x1 = (-coB + sqrt(delta)) / (2 * coA);
        x2 = (-coB - sqrt(delta)) / (2 * coA);
        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }

    return 0;
}
