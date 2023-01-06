/*
ABCDCBA
 ABCBA
  ABA
   A
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1,n;
    printf("Enter N=");
    scanf("%d",&n);
    while(i<=n){              // number of lines
        int b=1;
        while(b<=(i-1)){           // creates space
            printf(" ");
            b = b+1;
        }
        int a= 1;              
        int c = 1 ;
        while(c<= (n+1)-i){
        printf("%d",a);          // creates half 
        a=a+1;
        c=c+1;
        }
        int d=1;
        a=a-2;
        while(d<=c-2){                // creates another half
            printf("%d",a);
            a=a-1;
            d=d+1;
        }
        printf("\n");
        i=i+1;
    }
    getch();
}