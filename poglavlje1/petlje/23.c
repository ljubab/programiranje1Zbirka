#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, d;
    printf("Unesite brojeve n i d: ");
    scanf("%d %d", &n, &d);

    if(n <= 1) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    printf("Unesite n brojeva: ");

    int prosli = -1;
    int parovi = 0;

    for(int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);

        if(i > 0) {
            parovi += (abs(x - prosli) == d);
        }

        prosli = x;
    }

    printf("Broj parova: %d\n", parovi);
}
