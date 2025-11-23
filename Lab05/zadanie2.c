#include<stdio.h>

int main(){

int a;
int b;
scanf("%d %d", &a, &b);
int wynik = 1;
while( b > 0 ){
wynik *=a ;
b = b - 1;

}
 printf("wynik to %d", wynik);


}git