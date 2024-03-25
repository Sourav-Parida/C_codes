/*1.2 Write a program to create an array of n elements using dynamic memory
allocation. Calculate sum of all the prime elements of the array using function
and de-allocate the memory of the array after its use.*/


#include <Stdio.h>
#include<stdlib.h>

int main(){
	int n;
    printf("Enter Total number of inputs:");
	scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    printf("Enetr Input:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int sum=0;
	for(int i=0;i<n;i++){
		int ar,flag=0;
    	ar=arr[i];
    	if (ar == 0 || ar == 1){
    		flag = 1;
			}
    	for (int j = 2; j <= ar / 2; ++j) {
    	    if (ar % j == 0) {
    	    flag = 1;
    	    break;
    	    }
    	}
    	if (flag == 0){
        sum=sum+ar;
		}
		else{
			sum=sum+0;
		}
    }
    printf("\nSum of all prime numbers=%d",sum);
}