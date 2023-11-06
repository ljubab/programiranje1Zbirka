#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    int najveceDesetice = -1;
    int tajBroj = -1;

    printf("Unesite brojeve: ");
    for(int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);

        int desetice = abs(x) / 10 % 10;

        if(najveceDesetice < desetice) {
            najveceDesetice = desetice;
            tajBroj = x;
        }
    }

    printf("Broj sa najvecom cifrom desetica: %d.\n", tajBroj);
}
