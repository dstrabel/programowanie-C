#include<stdio.h>

int main (){
    int a;
    int b;
scanf("%d %d", &a, &b);

    int c = 0;
    int wc = 1;

while( wc <= b){
    c++;
    wc = wc*a;
}

printf("tajemnicza liczba to %d \n", c);





}