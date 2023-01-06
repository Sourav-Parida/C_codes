/* 3. Write a program to display following patterns:-
    *
   **
  ***
 ****                    */

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1,n;
    printf("enter N=");
    scanf("%d",&n);
    while(i<=n){
        int b=1;
        while(b<=(n-i)){
            printf(" ");
            b=b+1;
        }
        int a=1;
        while(a<=i){
            printf("* ");
            a=a+1;
        }
        printf("\n");
        i=i+1;
    }
}
