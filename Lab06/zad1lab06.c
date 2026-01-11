#include<stdio.h>
 int main(){
    int a, b;
printf("podaj dwie liczby\n");
scanf("%d %d", &a, &b);

int dodawanie(int a, int b){
    return a+b;
}
int odejmowanie(int a, int b){
    return a-b;
}
int mnozenie(int a, int b ){
    return a*b;
}
int dzielenie(int a, int b){
    return a/b;
}
printf("wybierz 1 jeśli chcesz dodawać\n");
printf("wybierz 2 jeśli chcesz odejmować\n");
printf("wybierz 3 jeśli chcesz mnożyć\n");
printf("wybierz 4 jeśli chcesz dzielić\n");
int wybor;
scanf("%d", &wybor);
switch(wybor){
    case 1: printf("%d + %d = %d", a, b, dodawanie(a,b));
    break;
    case 2: printf("%d - %d = %d", a, b, odejmowanie(a,b));
    break;
    case 3: printf("%d * %d = %d", a, b, mnozenie(a,b));
    break;
    case 4: printf("%d / %d = %d", a, b, dzielenie(a,b));
    break;
    default: printf("error"); 
    break;
}

 }