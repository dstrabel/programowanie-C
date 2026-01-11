#include<stdio.h>
int main(){
 int porownanie(char a,char b){
    if(a==b){
        return 1;
    }
    else {
        return 0;
    }
 }
 printf("%d", porownanie ('c', 'b') );
 printf("%d", porownanie ('v', 'v') );
}