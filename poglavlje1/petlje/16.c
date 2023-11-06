#include <stdio.h>

int main() {
    printf("Unesite brojeve: ");

    int suma = 0;
    int ima = 0;

    for(;;) {
        int x;
        scanf("%d", &x);

        if(x == 0) {
            break;
        }

        ++ima;
        suma += x;
    }

    if(ima == 0) {
        printf("Nisu uneti brojevi.\n");
        return 1;
    }

    printf("Aritmeticka sredina: %.4f\n", (suma * 1.00) / ima);
}
