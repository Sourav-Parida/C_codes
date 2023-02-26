#include<stdio.h>
#include<string.h>

void main(){
    char str[1000],rev[1000],*s,*r;
    int i,y=0;
    printf("Enter the line of string:");
    scanf("%[^\n]s",str);
    strcpy(rev,str);
    strrev(rev);
    s=str;
    r=rev;
    for(i=0;*s!='\0';i++){
        if(*s!=*r){
            y=1;
        }
        s++;
        r++;   
    }
    if(y==1){
        printf("String is not a palindrome");
    }
    else{
        printf("String is a palindrome");
    }
}