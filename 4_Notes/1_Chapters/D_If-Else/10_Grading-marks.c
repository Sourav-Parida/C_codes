/*10.Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer.*/

#include<stdio.h>
#include<conio.h>
int main(){
    printf("Program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.");
    float phy,che,bio,math,comp;
    printf("\n\nEnter mark in Physics:--");
    scanf("%f",&phy);
    printf("Enter mark in Chemistry:--");
    scanf("%f",&che);
    printf("Enter mark in Biology:--");
    scanf("%f",&bio);
    printf("Enter mark in Mathmatics:--");
    scanf("%f",&math);
    printf("Enter mark in Computer:--");
    scanf("%f",&comp);
    float total= phy+che+bio+math+comp;
    float tp= total/5;
    if(phy<100 && che<100 && bio<100 && math<100 && comp<100 && phy>0 && che>0 && bio>0 && math>0 && comp>0){
        printf("percentage scored -- %.2f",tp);
        printf("\n");
        if (tp>=90)
            printf("Grade A");
        else if (tp>=80)
            printf("Grade B");
        else if (tp>=70)
            printf("Grade C");
        else if (tp>=60)
            printf("Grade D");
        else if (tp>=50)
            printf("Grade E");
        else
            printf("Grade F");
        printf("\n");
        }
    else
        printf("Marks Entered are wrong \n Enter the marks again");
getch();
}