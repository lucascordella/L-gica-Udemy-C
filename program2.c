#include <stdio.h>

int main () {
    int x, y;

    x = 10;
    y = 20;

    printf("%d\n", x);
    printf("%d\n", y);

    double z;

    z = 2.34567;

    printf("%lf\n", z);

    int idade;
    double salario;
    char nome[50];
    char sexo;
    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Maria Silva");
    sexo = 'F';

    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos", nome, sexo, salario, idade);

    return 0;
}
