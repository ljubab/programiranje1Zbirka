#include <stdio.h>

typedef long long ll;

int main() {
    //Collatz conjecture
    ll a;
    printf("Unesite prvi clan: ");
    scanf("%lld", &a);

    if(a < 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    printf("Clanovi niza: %lld", a);

    while(1) {
        if(a % 2 == 0) {
            a /= 2;
        } else {
            a = (3 * a + 1) / 2;
        }

        printf(" %lld", a);

        if(a == 1) break;
    }

    printf("\n");
}
