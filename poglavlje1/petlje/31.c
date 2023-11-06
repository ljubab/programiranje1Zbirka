#include <stdio.h>
#include <ctype.h>

int main() {
    for(;;) {
        char c = getchar();
        if(c == '.') break;

        if(isupper(c)) {
            putchar(tolower(c));
        } else if(islower(c)) {
            putchar(toupper(c));
        } else {
            putchar(c);
        }
    }
    putchar('\n');
}
