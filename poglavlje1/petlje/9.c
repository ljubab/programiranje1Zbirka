#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    while(n % 10 == 0 && n != 0) {
        n /= 10;
    }

    printf("Rezultat: %d\n", n);
}
