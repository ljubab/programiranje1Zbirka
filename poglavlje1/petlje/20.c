#include <stdio.h>

int main() {
    float budzet;
    printf("Nikolin budzet: ");
    scanf("%f", &budzet);

    int n;
    printf("Unesite broj artikala: ");
    scanf("%d", &n);

    int ukupno = 0;

    printf("Unesite cene artikala: ");
    for(int i = 0; i < n; ++i) {
        float x;
        scanf("%f", &x);
        ukupno += (x <= budzet);
    }

    printf("Ukupno artikala: %d\n", ukupno);
}
