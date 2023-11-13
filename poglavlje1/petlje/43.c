#include <stdio.h>

int main() {
    double x;
    int n;
    printf("Unesite x i n: ");
    scanf("%lf %d", &x, &n);

    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    double suma = 1;
    double tren = 1;

    for(int i = 2; i <= 2 * n; i += 2) {
        tren *= (-1.00 * x * x) / (i * 1.00 * (i - 1));
        suma += tren;
    }

    printf("S = %.6lf\n", suma);
}
