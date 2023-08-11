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

    int m;
    printf("\n\nEnter next number of inputs into array:");
    scanf("%d",&m);
    ptr= realloc(ptr, n+m);
    for (int i=n;i<n+m;i++){
        printf("Enter %dth value:",i+1);
        scanf("%d",&ptr[i]);
        
    }

    printf("\nprinting final array\n");
    for (int i=0;i<n+m;i++){
        printf("\nValue in %d index of array is:%d",i,ptr[i]);
        2
    }
    free(ptr);
}