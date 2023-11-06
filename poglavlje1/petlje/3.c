#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Greska: pogresan unos broja n.\n");
        return 0;
    }

    for(int i = 0; i <= n; ++i) {
        printf("%d%c", i, " \n"[i == n]);
    }
}
