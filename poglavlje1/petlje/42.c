#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    double izraz = 1.00 / n;

    for(int i = n - 1; i >= 1; --i) {
        izraz = 1 / (i + izraz);
    }

    printf("R = %.6lf\n", izraz);
}
