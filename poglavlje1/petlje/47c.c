#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            int sledeciBroj = (j + i) % n + 1;
            printf("%3d%c", sledeciBroj, " \n"[j == n - 1]);
        }
    }
}
