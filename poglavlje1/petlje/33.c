#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    getchar();

    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Unesite n karaktera: ");
    for(int i = 0; i < n; ++i) {
        char c;
        c = getchar();
        c = tolower(c);
        switch(c) {
            case 'a':
                ++a;
                break;
            case 'e':
                ++e;
                break;
            case 'i':
                ++i;
                break;
            case 'o':
                ++o;
                break;
            case 'u':
                ++u;
                break;
        }
    }

    printf("Samoglasnik a: %d\n", a);
    printf("Samoglasnik e: %d\n", e);
    printf("Samoglasnik i: %d\n", i);
    printf("Samoglasnik o: %d\n", o);
    printf("Samoglasnik u: %d\n", u);
}
