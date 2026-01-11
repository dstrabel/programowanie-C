#include<stdio.h>

int main(){

    int tablica_liczb[5] = {1,4,5,7,8};
    int tablica_kwadratow[5];
    int i;
    for (i=0; i<5; i++){
        tablica_kwadratow[i]=tablica_liczb[i]*tablica_liczb[i];
    }
    for(i=0; i<5; i++){
        printf("%d\n", tablica_kwadratow[i]);
    }
  






}