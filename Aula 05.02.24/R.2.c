#include <stdio.h>

int main(void) {
    int pos, vet [10];
    
    for(pos=0;pos<10;pos++){
        do{
            printf("Insira o %d numero par:", pos);
            scanf("%d",&vet[pos]);
        }while(vet[pos]%2!=0);
    }
    
    for(pos=0;pos<10;pos++){
        printf("Posicao [%d]=%d\n", pos, vet[pos]);
    }
    
  return 0;
}

