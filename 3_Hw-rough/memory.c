#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*)mlloc(10*sizeof(int));
    for(int i=0 ; i<3; i++)
    {
        printf("Enter the value of no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    
    
    
    
return 0;
}