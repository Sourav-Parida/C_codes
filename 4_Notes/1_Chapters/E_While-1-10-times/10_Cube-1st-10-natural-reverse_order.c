//10. Write a program to print the cubes of the first 10 natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>

int main(){
    printf("Program to print the cubes of the first 10 natural numbers in reverse order.");
    printf("\n\n");
    int i=10;
    while (i>0){
        printf("%d  ",i*i*i);
        i=i-1;
    }
getch();
}