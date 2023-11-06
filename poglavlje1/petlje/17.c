#include <stdio.h>

int main() {
    printf("Unesite brojeve: ");

    float suma = 0;
    int ima = 0;

    for(;;) {
        float x;
        scanf("%f", &x);

        if(x == 0.00) {
            break;
        }

        if(x < 0.00) {
            printf("Greska: neispravan unos cene.\n");
            return 1;
        }

        ++ima;
        suma += x;
    }

    if(ima == 0) {
        printf("Nisu unete cene.\n");
        return 1;
    }

    printf("Aritmeticka sredina: %.4f\n", (suma * 1.00) / ima);
}
