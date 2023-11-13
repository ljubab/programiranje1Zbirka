#include <stdio.h>

int main() {
    //(1 + (n + 1)!) - (1 + n!) = -(n / (n + 1)!)
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    double izraz = 1;
    double trenutni = 1 + (1.00 / 2);
    double invFakt = 0.50; //ova promeljiva ce jako brzo teziti nuli

    for(int i = 2; i <= n; ++i) {
        izraz *= trenutni;
        invFakt *= (1.00 / (i + 1));
        trenutni += -(i * 1.00) * invFakt;
    }

    printf("P = %.6lf\n", izraz);
}
