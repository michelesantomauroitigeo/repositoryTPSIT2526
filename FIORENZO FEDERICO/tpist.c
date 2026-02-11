#include <stdio.h>
int main(){
	int a;
	int max;
	int i;
	int registro;
	printf("Inserisci il registro base:\n");
	scanf("%d",&a);
	printf("inserisci l'indirizzo max:\n");
	scanf("%d",&max);
	for(i=1;i<=max;i=i+1){
		registro=a+i;
		printf("il registro e: #%d\n",registro);
		
		
	}
	
	
}