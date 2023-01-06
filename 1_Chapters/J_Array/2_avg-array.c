/*  2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.  */

#include<stdio.h>
#include<conio.h>


void input(int,int);
int sum(int);
int main(){
    int n;
    printf("Enter the size of array:--");
    scanf("%d",n);
    int a[n];
    input(a[n],n);
    int s= sum(a[n]);
    int avg=s/n;
    printf("average of the array is :-- %d",avg);
    
    }

void input (int b[],int m){
    int i;
    for(int i=0;i<=(m-1);i++){
    printf("Enter the value %d :-", i+1);
    scanf("%d",&b[i]);
    }
}

int sum (int c[]){
    int s=0;
    for(int j=0;j<=9;j++){
    s=s+c[j];
    }
    return s;
}