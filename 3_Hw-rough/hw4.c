

#include<stdio.h>
#include<conio.h>

int main(){
    int i,s,n;
    printf("Enter the no.:- ");
    scanf("%d",&n);
    s=0;
    i=1;
    while(i<=n){
        s=s+i;
        i=i+1;
    }
    printf("%d",s);
}