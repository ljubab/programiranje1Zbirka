#include <stdio.h>

typedef long double ld;

int main() {
    double x;
    int n;
    printf("Unesite redom brojeve x i n: ");
    scanf("%lf %d", &x, &n);

    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    ld suma = 0;
    ld stepen = x;
    for(int i = 1; i <= n; ++i) {
        suma += i * stepen;
        stepen *= x;
    }

    printf("S = %.6Lf\n", suma);
}
