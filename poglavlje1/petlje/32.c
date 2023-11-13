#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Unesite tekst: ");
    char c;
    int velikaSlova = 0, malaSlova = 0;
    int cifre = 0, beline = 0;
    int sumaCifara = 0;

    while((c = getchar()) != EOF) {
        if(isupper(c)) ++velikaSlova;
        else if(islower(c)) ++malaSlova;
        else if(isspace(c)) ++beline;
        else if(isdigit(c)) {
            ++cifre;
            sumaCifara += c - '0';
        }
    }

    printf("Velika slova: %d\n", velikaSlova);
    printf("Mala slova: %d\n", malaSlova);
    printf("Cifre: %d\n", cifre);
    printf("Beline: %d\n", beline);
    printf("Suma cifara: %d\n", sumaCifara);
}
