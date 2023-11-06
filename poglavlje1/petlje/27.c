#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    int stepen = 1;
    while(stepen * 10 <= n) stepen *= 10;

    while(1) {
        if(n < 10) {
            printf("Broj je palindrom.\n");
            return 0;
        }

        int prvaCifra = n / stepen;
        int poslednjaCifra = n % 10;

        if(prvaCifra != poslednjaCifra) break;

        n -= stepen * prvaCifra;
        n /= 10;
        stepen /= 100;
    }

    printf("Broj nije palindrom.\n");
}
