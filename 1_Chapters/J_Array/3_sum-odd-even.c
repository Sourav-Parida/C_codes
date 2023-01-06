/* Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.  */

#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,a[10];
    for(int i=0;i<=9;i++){
    printf("Enter the value %d :-", i+1);
    scanf("%d",&a[i]);
    }
    int sum_odd=0;
    int sum_even=0;
    for(int j=0;j<=9;j++){
        if (a[j]%2==0){
            sum_even=sum_even+a[j];
        }
        else
            sum_odd=sum_odd+a[j];
        }
    printf("sum of the odd numbers is:--- %d",sum_even);
    printf("sum of the even numbers is:--- %d",sum_odd);
}
