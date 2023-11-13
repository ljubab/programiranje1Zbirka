#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        if(i == n / 2) {
            for(int j = 0; j < n; ++j) putchar('+');
            putchar('\n');
            continue;
        }

        for(int j = 0; j < n; ++j) {
            char kar = (j == n / 2) ? '+' : ' ';
            putchar(kar);
        }
        putchar('\n');
    }
}
