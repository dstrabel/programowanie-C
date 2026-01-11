#include<stdio.h>

int main(){
int n = 5;
int i;
int tablica[n];
for(i=0; i<n; i++){
    scanf("%d", &tablica[i]);
}
for(i=0; i<n; i++){
    printf("%d\n", tablica[i]);
}

}