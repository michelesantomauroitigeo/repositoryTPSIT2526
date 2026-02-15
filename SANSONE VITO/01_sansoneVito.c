#include <stdio.h>
 
 int main(){
 	int i_b; //indirizzo base
 	int nc;  //numero celle
 	int i_l; //indirizzo logico
 	int i;   //contatore
 	
 	printf("Inserisci l'indirizzo base:");
 	scanf("%d",& i_b);
 	printf("Inserisci il numero di celle che servono:");
 	scanf("%d",& nc);
 	printf("le celle da usare sono: %d\n", i_l);
 	
 	for(i=1; i<=nc; i=i+1){
 		i_l = i_l+1;
		printf("%d", i_l);
	 }
 }
