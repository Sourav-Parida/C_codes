/*  3. Write a program to display following patterns
   *   
  ***
 *****
*******   */

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1,n;
    printf("Enter n");
    scanf("%d",&n);
    while(i<=n){
        int b=1;
        while(b<=(n-i)){
            printf(" ");
            b=b+1;
        }
        int a=1;
        while(a<=((i*i)-(i-1)*(i-1))){
            printf("*");
            a=a+1;
        }
        printf("\n");
        i=i+1;
    }


}