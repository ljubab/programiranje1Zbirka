#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    int tempN = n;

    n = abs(n);

    while(n) {
        if(n % 10 == 5) {
            printf("Broj %d sadrzi cifru 5.\n", tempN);
            return 0;
        }
        n /= 10;
    }

    printf("Broj %d ne sadrzi cifru 5.\n", tempN);
}
