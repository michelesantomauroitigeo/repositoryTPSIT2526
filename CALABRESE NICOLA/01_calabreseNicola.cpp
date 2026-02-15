#include<stdio.h>
int main(){
	int indirizzoBase, numeroIndirizziLogici, indirizzoFisico, i;
	i=0;
	printf("Inserisci indirizzo base:");
	scanf("%d", &indirizzoBase);
	printf("Inserisci numero indirizzi logici:");
	scanf("%d", &numeroIndirizziLogici);
	for (i=1; i <= numeroIndirizziLogici; i++){
	    indirizzoFisico= indirizzoBase+numeroIndirizziLogici;
	    printf("L'indirizzo fisico e':%d",indirizzoFisico);
    }
    return 0;
}
