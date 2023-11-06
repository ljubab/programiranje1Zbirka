#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Greska: neispravan ulaz.\n");
        return 0;
    }

    int suma = 0;
    int tempN = n;

    while(n) {
        suma += n % 10;
        n /= 10;
    }

    if(tempN % suma == 0) {
        printf("Broj %d je deliv sa %d.\n", tempN, suma);
    } else {
        printf("Broj %d nije deliv sa %d.\n", tempN, suma);
    }
}
