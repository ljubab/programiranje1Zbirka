#include <stdio.h>
#include <stdlib.h>

int main() {
    float x;
    int n;
    printf("Unesite redom brojeve x i n: ");
    scanf("%f %d", &x, &n);

    long double rez = 1;
    for(int i = 0; i < abs(n); ++i) {
        rez *= x;
    }

    if(n < 0) rez = 1.00 / rez;

    printf("Rezultat: %.5Lf\n", rez);
}
