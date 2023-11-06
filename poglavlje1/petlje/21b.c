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

    int najveciBrojCifara = -1;
    int tajBroj = -1;

    printf("Unesite brojeve: ");
    for(int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);

        int temp = x;
        int brojCifara = 0;
        while(x) {
            ++brojCifara;
            x /= 10;
        }

        x = temp;
        if(x == 0) brojCifara = 1;

        if(najveciBrojCifara < brojCifara) {
            najveciBrojCifara = brojCifara;
            tajBroj = x;
        }
    }

    printf("Najvise cifara ima broj %d.\n", tajBroj);
}
