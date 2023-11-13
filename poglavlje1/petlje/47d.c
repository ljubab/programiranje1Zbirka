#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - i; ++j) {
            printf("(%d,%d)%c", i, j, " \n"[j == (n - i - 1)]);
        }
    }
}
