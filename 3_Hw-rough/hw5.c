

#include<stdio.h>
#include<conio.h>

int main(){
    int i,a,b;
    i=1;
    while(i<=10){
        a=1;
        while(a<=10){
            printf("%d     ",i*a );
            a=a+1;
        }
        printf("\n");
        i=i+1;
    }
}