#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned int)time(NULL)); 
    int d[2];
    int total = 0;

    printf("Rolling the dice...\n");
    for(int i = 0 ; i < 2 ; i++){
        d[i] = rand() % 7;
        total += d[i];
    }
    for(int i = 0 ; i < 2 ; i++){
        printf("Die %d: %d\n",i+1,d[i]);
    }
    printf("Total value: %d\n", total);
    if(total > 7){
        printf("You won!");
    } else{
        printf("You lost!");
    }

    return 0;
}