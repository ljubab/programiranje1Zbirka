#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    getchar();

    int Z = 0, i = 0, m = 0, a = 0;
    for(int k = 1; k <= n; ++k) {
        printf("Unesite %d. karakter: ", k);
        char c;
        c = getchar();
        getchar();

        if(c == 'Z') ++Z;
        else if(c == 'i') ++i;
        else if(c == 'm') ++m;
        else if(c == 'a') ++a;
    }

    if((Z > 0 && i > 0) && (m > 0 && a > 0)) {
        printf("Moze se napisati rec Zima.\n");
    } else {
        printf("Ne moze se napisati rec Zima.\n");
    }
}
