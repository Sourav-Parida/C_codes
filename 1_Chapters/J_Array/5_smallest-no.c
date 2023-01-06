// 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,min=0,a[10];
    for(int i=0;i<=9;i++){
    printf("Enter the value %d :-", i+1);
    scanf("%d",&a[i]);
    }
    if(a[0]>a[1])
        min=a[1];
    else
        min= a[0];
    for(i=2;i<=9;i++){
        if(min>a[i])
            min=a[i];
        }
    printf("The maximum no is :==%d",min);
    

}