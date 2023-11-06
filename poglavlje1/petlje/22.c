#include <stdio.h>

int main() {
    printf("Unesite brojeve: ");

    int usao = 0;
    int najveci, najmanji;

    for(;;) {
        int x;
        scanf("%d", &x);

        if(x == 0) {
            break;
        }

        if(usao == 0) {
            najveci = najmanji = x;
        }

        usao = 1;

        najveci = (najveci < x) ? x : najveci;
        najmanji = (najmanji > x) ? x : najmanji;
    }

    if(!usao) {
        printf("Nisu unete nadmorske visine.\n");
        return 1;
    }

    printf("Razlika: %d\n", najveci - najmanji);
}
