#include<stdio.h>
int silnia(int n) {
if(n>0){
    return n*silnia(n-1);
}else{
    return 1;
}
}
int main(){
int = 5;
printf("silnia %d = %d/n", n,silnia(n));
}