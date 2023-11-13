#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        if(i == 0 || i == n - 1) {
            for(int j = 0; j < n; ++j) {
                putchar('*');
            }
        } else {
            for(int j = 0; j < n; ++j) {
                char kar = (((j == 0) || (j == n - 1)) || (i == j)) ? '*' : ' ';
                putchar(kar);
            }
        }
        putchar('\n');
    }
}
