#include <stdio.h>

int main() {
    int base;
    int num_logici;
    int i;

    printf("Inserisci l'indirizzo base: ");
    scanf("%d", &base);

    printf("Inserisci il numero di indirizzi logici: ");
    scanf("%d", &num_logici);

    printf("\nMappatura indirizzi logici -> fisici:\n");

    for (i = 0; i < num_logici; i++) {
        int indirizzo_fisico = base + i;
        printf("Indirizzo logico %d -> Indirizzo fisico %d\n", i, indirizzo_fisico);
    }

    return 0;
}