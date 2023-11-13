#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    printf("Unesite redom brojeve x i n: ");
    scanf("%lf %d", &x, &n);

    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    double izraz = 1.00;
    double stepen = x;

    for(int i = 1; i <= n; ++i) {
        izraz *= (1 + cos(stepen));
        stepen *= x;
    }

    printf("P = %.6lf\n", izraz);
}
