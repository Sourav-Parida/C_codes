/*  4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.  */

#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,max=0,a[10];
    for(int i=0;i<=9;i++){
    printf("Enter the value %d :-", i+1);
    scanf("%d",&a[i]);
    }
    if(a[0]<a[1])
        max=a[1];
    else
        max= a[0];
    for(i=2;i<=9;i++){
        if(max<a[i])
            max=a[i];
    }
    printf("The maximum no is :===%d",max);

}