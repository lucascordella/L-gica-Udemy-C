#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, mult;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &N);

    for (i = 1; i <= 10; i++){
        mult = N * i;
        printf("%d X %d = %d\n", N, i, mult);
    }
    return 0;
}
