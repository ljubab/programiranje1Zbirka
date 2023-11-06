#include <stdio.h>

int main() {
    int n, m;
    printf("Unesite granice intervala: ");
    scanf("%d %d", &n, &m);

    if(n > m) {
        printf("Greska: pogresan unos granica.\n");
        return 0;
    }

    int i = n;

    while(i <= m) {
        printf("%d%c", i++, " \n"[i == m]);
    }

    for(i = n; i <= m; ++i) {
        printf("%d%c", i, " \n"[i == m]);
    }

    i = n;

    do {
        printf("%d%c", i++, " \n"[i == m]);
    } while(i <= m);
}
