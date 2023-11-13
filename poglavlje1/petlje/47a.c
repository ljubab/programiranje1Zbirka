#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            printf("%3d%c", i * j, " \n"[j == n]);
        }
    }
}
