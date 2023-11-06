#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj artikla: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    float mini;
    printf("Unesite cene artikala: ");

    for(int i = 0; i < n; ++i) {
        float x;
        scanf("%f", &x);

        if(x < 0.00) {
            printf("Greska: neispravan unos cene.\n");
            return 1;
        }

        if(i == 0) {
            mini = x;
        }

        mini = (mini > x) ? x : mini;
    }

    printf("Najmanja cena: %.6f\n", mini);
}
