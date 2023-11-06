#include <stdio.h>
#include <stdlib.h>

int main() {
    //Uzimamo tri poslednje cifre, i proveravamo da li je druga cifra jednaka zbiru prve i trece
    //drugi broj ubacujemo u nas rezultat u zavisnosti da li je jednak zbiru prvog i treceg
    //sledeci korak je da uzmemo sledeci segment od tri cifre koji nismo uzeli
    //ponavljamo ovaj proces...
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Greska: neispravan unos.\n");
        return 1;
    }

    if(n < 100) {
        printf("Rezultat: %d\n", n);
        return 0;
    }

    int rezultat = n % 10;
    int stepen = 10;

    int treci = n % 10;
    int drugi = n / 10 % 10;
    int prvi = n / 100 % 10;

    n /= 1000;

    do {
        int cifra = n % 10;
        if(drugi != prvi + treci) {
            rezultat += drugi * stepen;
            stepen *= 10;
        }

        treci = drugi;
        drugi = prvi;
        prvi = cifra;

        n /= 10;
    } while(n);

    if(prvi + treci != drugi) {
        rezultat += drugi * stepen;
        stepen *= 10;
    }

    rezultat += prvi * stepen;

    printf("Rezultat: %d\n", rezultat);
}
