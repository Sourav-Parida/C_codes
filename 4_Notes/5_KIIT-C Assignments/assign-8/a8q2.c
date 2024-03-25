#include<stdio.h>
void main (){
    int a,b,*p1,*p2,r;
    printf("Enter two number:");
    scanf("%d,%d",&a,&b);
    p1 = &a;
    p2 = &b;
    printf ("Addition= %d\n",*p1 + *p2);
    printf ("Subtraction= %d\n",*p1 - *p2);
    printf ("Multiplication= %d\n",*p1 * *p2);
    printf ("Division= %d\n",*p1 / *p2);
    printf ("Modulus division= %d\n",*p1 % *p2);
}