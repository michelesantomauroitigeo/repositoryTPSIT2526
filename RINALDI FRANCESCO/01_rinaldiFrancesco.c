#include <stdio.h>
int main(){
	
	int rb,max, i, registro;
	
	printf("Inserisci il registro base:");
	scanf("%d",& rb);
	printf("inserisci l'indirizzo max:");
	scanf("%d",&max);
	
	for(i=1;i<=max;i=i+1){
		registro=rb+i;
		printf("il registro e: #%d\n",registro);
	
	}
	return 0;
}
