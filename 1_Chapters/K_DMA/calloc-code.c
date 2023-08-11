#include <stdio.h>
#include <stdlib.h>

void main(){
    int n;
    printf("Enter number of inputs:");
    scanf("%d",&n);
    int* ptr;
    ptr= (int*) calloc(n,sizeof(int));
    for (int i=0;i<n;i++){
        printf("Enter %d value:",i+1);
        scanf("%d",&ptr[i]);
        
    }
    for (int i=0;i<n;i++){
        printf("\nValue in %d index of array is:%d",i,ptr[i]);
        
    }
    free(ptr);
}