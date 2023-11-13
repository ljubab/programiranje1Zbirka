#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x;
    printf("Unesite x: ");
    scanf("%f", &x);

    float eps;
    printf("Unesite tacnost eps: ");
    scanf("%f", &eps);

    float suma = 1;
    float trenutniClan = -x;

    for(int i = 2; ; ++i) {
        suma += trenutniClan;
        if(fabs(trenutniClan) < eps) break;
        trenutniClan *= (-1.00) * (x / (1.00 * i));
    }

    printf("S = %.6f\n", suma);
}
