#include<stdio.h>
#include<conio.h>

int main(){
    int hh1=0,hh2=0,mm1=0,mm2=0,ss1=0,ss2=0,mm3=0,ss3=0,hh3=0;
    printf("Enter time 1:");
    scanf("%d,%d,%d",&hh1,&mm1,&ss1);
    //printf("Enter mm of time 1:");
    //scanf("%d",&mm1);
    //printf("Enter ss of time 1:");
    //scanf("%d",&ss1);
    printf("Enter time 2:");
    scanf("%d,%d,%d",&hh2,&mm2,&ss2);
    //printf("Enter hh of time 2:");
    //scanf("%d",&mm2);
    //printf("Enter hh of time 2:");
    //scanf("%d",&ss2);
    ss3=ss1+ss2;
    if(ss3>60)
        mm3=mm1+mm2+(ss3-60);
    else
        mm3=mm1+mm2;
    if(mm3>60)
        hh3=hh1+hh2+(mm3-60);
    else
        hh3=hh1+hh2;
    printf("Added time is %d:%d:%d",hh3,mm3,ss3);
    
    
    

}