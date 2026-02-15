#include<stdio.h>
int main(){
	int indirizzo_Base, numero_Indirizzi_Logici, indirizzo_Fisico, i;
	i=0;
	printf("\nInserisci indirizzo base:");
	scanf("%d", &indirizzo_Base);
	printf("\nInserisci numero indirizzi logici:");
	scanf("%d", &numero_Indirizzi_Logici);
	for (i=1; i <= numero_Indirizzi_Logici; i++){
	    indirizzo_Fisico= indirizzo_Base+numero_Indirizzi_Logici;
	    printf("\n L'indirizzo fisico e':%d",indirizzo_Fisico);
    }
    return 0;
}