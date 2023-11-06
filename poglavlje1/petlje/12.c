#include <stdio.h>

int main() {
    int t;
    printf("Unesite broj t: ");
    scanf("%d", &t);

    if(t < 0) {
        printf("Greska: neispravan unos.\n");
        return 0;
    } else if(t == 0) {
        printf("Nema evidentiranih transakcija.\n");
        return 0;
    }

    printf("Unesite transakcije: ");
    int prihod = 0, rashod = 0;

    for(int i = 0; i < t; ++i) {
        int x;
        scanf("%d", &x);
        if(x > 0) prihod += x;
        else if(x < 0) rashod += -x;
    }

    printf("Prihod: %d\n", prihod);
    printf("Rashod: %d\n", -rashod);

    if(prihod >= rashod) {
        printf("Zarada: %d\n", prihod - rashod);
    } else {
        printf("Gubitak: %d\n", rashod - prihod);
    }
}
