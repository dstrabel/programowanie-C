#include<stdio.h>

int main (){ 

    int a;
    int b;

// Pobranie dwoch liczb 
    printf("podaj dwie liczby calkowite: ");
    scanf ("%d %d", &a, &b); 
 // Dodawanie 
     int suma =  a + b;
    printf("%d + %d = %d\n", a, b, suma);

// odejmowanie 
    int roznica = a - b; 
    printf("%d - %d = %d\n", a, b, roznica);

// mnozenie 
    int iloczyn = a * b;
    printf("%d * %d = %d/n", a, b, iloczyn); 

//dzielenie 
// trzeba upewnić się, że dzielnik nie jest zerem aby uniknąć dzielenia przez 0 
    if(b !=0) {
    int iloraz = a / b;
    printf("%d / %d = %d\n", a, b, iloraz);
// reszta z dzielenia 
        int reszta = a / b;
        printf("reszta z dzielenia %d przez %d to %d\n", a, b, reszta);} 
        else {printf("nie można dzielić przez zero.\n");
        }






}