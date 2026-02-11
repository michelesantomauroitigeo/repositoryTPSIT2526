#include <stdio.h>

int main() {
    int registroBase;
    int indirizzoAssoluto;
    int indirizzi;
    int i;
    printf("Inserisci il numero iniziale: ");
    scanf("%d", &registroBase);
    printf("Inserisci il numero totale degli indirizzi: ");
    scanf("%d", &indirizzi);
    for( i=0; i <= indirizzi; i++) {
        indirizzoAssoluto = registroBase+i;
        printf("#\n", &indirizzoAssoluto);
    }
  
    return 0;
}
