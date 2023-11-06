#include <stdio.h>

typedef unsigned long long ull;

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    if(n < 2) {
        printf("F[%d] = %d\n", n, n);
        return 0;
    }

    ull prvi = 0, drugi = 1;
    for(int i = 2; i <= n; ++i) {
        ull novi = prvi + drugi;

        prvi = drugi;
        drugi = novi;
    }

    printf("F[%d] = %llu\n", n, drugi);
}
