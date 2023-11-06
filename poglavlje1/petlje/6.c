#include <stdio.h>

int main() {
    float x;
    int n;
    printf("Unesite redom brojeve x i n: ");
    scanf("%f %d", &x, &n);

    if(n < 0) {
        printf("Greska: neispravan unos broja n.\n");
        return 0;
    }

    long double rez = 1;
    for(int i = 0; i < n; ++i) {
        rez *= x;
    }

    printf("Rezultat: %.5Lf\n", rez);
}
