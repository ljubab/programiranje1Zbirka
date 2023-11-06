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

    int najvecaVodecaCifra = -1;
    int tajBroj = -1;

    printf("Unesite brojeve: ");
    for(int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);

        int temp = x;
        x = abs(x);
        int vodecaCifra = 0;

        while(x) {
            vodecaCifra = x % 10;
            x /= 10;
        }

        x = temp;

        if(vodecaCifra > najvecaVodecaCifra) {
            najvecaVodecaCifra = vodecaCifra;
            tajBroj = x;
        }
    }

    printf("Broj sa najvecom vodecom cifrom je %d.\n", tajBroj);
}
