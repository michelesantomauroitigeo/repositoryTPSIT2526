#include <stdio.h>

int main(){
	int indirizzo_Base;
	int numero_Indirizzi_Logici;
	int indirizzo_Fisico;
	int i;
	
	printf("Inserisci l'indirizzo base: ");
	scanf("%d", & indirizzo_Base);
	printf("Inserisci il numero di indirizzi logici da generare: ");
	scanf("%d", & numero_Indirizzi_Logici);
	for(i = 0; i < numero_Indirizzi_Logici; i++){
		indirizzo_Fisico = indirizzo_Base + i;
		printf("\n Indirizzo fisico: #%d", indirizzo_Fisico);
	}
	return 0;
}

