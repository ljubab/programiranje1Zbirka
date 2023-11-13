#include <stdio.h>

int main() {
    double x, a;
    printf("Unesite brojeve x i a: ");
    scanf("%lf %lf", &x, &a);

    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    double izraz = (x + a) * (x + a);
    for(int i = 2; i <= n; ++i) {
        izraz = (izraz + a) * (izraz + a);
    }

    printf("Izraz = %.6lf\n", izraz);
}
