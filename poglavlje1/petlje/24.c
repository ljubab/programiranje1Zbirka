#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    int rezultat = 0;
    int stepen = 1;

    while(n) {
        int cifra = n % 10;
        if(cifra % 2 == 0) ++cifra;
        rezultat += cifra * stepen;
        stepen *= 10;
        n /= 10;
    }

    printf("Rezultat: %d\n", rezultat);
}
