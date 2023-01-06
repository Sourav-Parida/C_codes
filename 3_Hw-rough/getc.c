#include<stdio.h>
#include<conio.h>
void main(){
    char c[10],ch;
    int i=0;
    printf("Enetr a string:--");
    while (ch != '\n'){
    ch = fgetc(stdin);
    c[i]=ch;
    i++;
    }
    //c[i]='\0';
    printf("\nentered value is %s",c);
}