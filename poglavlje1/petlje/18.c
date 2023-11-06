#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    float prosli = 0.00;
    int promene = 0;

    printf("Unesite brojeve: ");

    for(int i = 0; i < n; ++i) {
        float x;
        scanf("%f", &x);

        if(i > 0) {
            promene += ((x >= 0.00) ^ (prosli >= 0.00));
        }
        prosli = x;
    }

    printf("Broj promena je %d.\n", promene);
}
