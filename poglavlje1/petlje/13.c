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

    int zbir = 0;
    printf("Unesite n brojeva: ");

    for(int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        if(x < 0 && abs(x) % 2 == 1) {
            zbir += x;
        }
    }

    printf("Zbir neparnih i negativnih: %d\n", zbir);
}
