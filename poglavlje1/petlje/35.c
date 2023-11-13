#include <stdio.h>

typedef unsigned long long ull;

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    ull suma = 0;

    for(int i = 1; i <= n; ++i) {
        ull kub = i * 1ULL * i * i;
        suma += kub;
    }

    printf("Suma kubova: %llu\n", suma);
}
