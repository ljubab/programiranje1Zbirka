#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    int stepen = 1;
    int uzmi = 1;
    int rezultat = 0;

    int temp = n;
    n = abs(n);

    while(n) {
        int cifra = n % 10;
        if(uzmi) {
            rezultat += cifra * stepen;
            stepen *= 10;
        }
        uzmi ^= 1;
        n /= 10;
    }

    n = temp;
    if(n < 0) rezultat *= -1;

    printf("Rezultat: %d\n", rezultat);
}
