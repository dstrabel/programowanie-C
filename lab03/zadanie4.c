#include<stdio.h>

int main () {

    int a;
    int b;
    int c;
printf("podaj 3 liczby całkowite\n");
scanf("%d %d %d", &a, &b, &c );
    if(a>b && a>c){
        printf("a\n");
    } else if (b>c && b>c){
        printf("b\n");
    } else if (c>a && c>b){
        printf("c\n");
    }
    
}