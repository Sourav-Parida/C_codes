//7. Write a program to print the squares of first 10 natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    printf("Program to print the squares of first 10 natural numbers");
    printf("\n\n");
    while (i<11){
        printf("%d  ",i*i);
        i=i+1;
    }
getch();
}