#include <stdio.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Greska: neispravan unos.\n");
        return 0;
    }

    if(n >= 21) {
        printf("Pri racunanju %d! ce doci do prekoracenja.\n", n);
        return 0;
    }

    ull res = 1;
    for(int i = 2; i <= n; ++i) {
        res *= i;
    }

    printf("%d! = %llu\n", n, res);
}
