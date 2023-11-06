#include <stdio.h>

typedef unsigned long long ull;

int main() {
    printf("Unesite brojeve: ");

    int ima = 0;
    int pozitivni = 0;
    ull proizvod = 1;

    for(;;) {
        int x;
        scanf("%d", &x);

        if(x == 0) {
            break;
        }

        ima = 1;
        if(x > 0) {
            proizvod *= x;
            pozitivni = 1;
        }
    }

    if(!ima) {
        printf("Nije unet nijedan broj.\n");
        return 1;
    }

    if(!pozitivni) {
        printf("Medju unetim brojevima nema pozitivnih.\n");
        return 1;
    }

    printf("Proizvod pozitivnih brojeva je %lld.\n", proizvod);
}
