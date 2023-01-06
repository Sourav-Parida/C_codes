#include<stdio.h>
#include<conio.h>
int main(){
    printf("all about pointers\n");
    int a=50;
    int *ptr = &a;
    printf("address of a== %x\n",ptr);
    printf("address of a ==%p\n",&a);
    
    
    
return 0;
}