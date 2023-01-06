#include<stdio.h>

int sum(int);
int main(){
    int n,x;
    printf("Enter the number:-");
    scanf("%d",&n);
    x=sum(n*n);
    if(x=n){
        printf("The number is neon number");
    }
    else
        printf("The Number is not neon number");

}

int sum(int n){
    int S;
    if(n/10==0){
        return n;
    }
    else
        S= n%10 + sum(n/10);
        return S;

}