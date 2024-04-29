#include <stdio.h>

int main(void) {
    int pos=0, vet [10];
    
    while(pos<10){
    	printf("Digite a posicao [%2d]:", pos+1);
    	scanf("%d",&vet[pos]);
    	
    	if(vet[pos]%2 != 0]){
    		printf("Presta atencao! Digite um par!\n");
    	}else{
    		pos++;
    	}
    	
		for (pos=0;pos<10;pos++);
		
    }
    
  return 0;
}

