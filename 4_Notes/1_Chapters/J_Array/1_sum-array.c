/* Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.  */

#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,s,a[10];
    for(int i=0;i<=9;i++){
    printf("Enter the value %d :-", i+1);
    scanf("%d",&a[i]);
    }
    s=0;
    for(int j=0;j<=9;j++){
    s=s+a[j];
    }
    printf("sum of the numbers is:--- %d",s);
}