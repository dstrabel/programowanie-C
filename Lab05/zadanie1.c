#include<stdio.h> 

 int main(){


  int n;
 printf("podaj liczbę naturalną \n");
 scanf("%d", &n);
    int wynik = 0;
 int i; 
 for ( i=1; i<n+1; i++){
    wynik += i*i; 

}
printf("wynik:%d\n", wynik);  



 }
