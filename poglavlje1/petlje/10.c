#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Unesite ceo broj: ");
    scanf("%d", &n);

    n = abs(n);

    printf("Rezultat:");

    while(n) {
        printf(" %d", n % 10);
        n /= 10;
    }

    printf("\n");
}
