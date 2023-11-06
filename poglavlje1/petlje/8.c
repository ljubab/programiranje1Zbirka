#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 0;
    }

    printf("Pravi delioci:");

    for(int i = 2; i < n; ++i) {
        if(n % i == 0) {
            printf(" %d", i);
        }
    }

    printf("\n");
}
