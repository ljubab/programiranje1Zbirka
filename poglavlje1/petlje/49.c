#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            char kar = ((j == i) || (j == (n - 1 - i))) ? '*' : ' ';
            putchar(kar);
        }
        putchar('\n');
    }
}
