#include <stdio.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < (n-i)-1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void main(){
    int arr[10];
    printf("Enter 10 integers:");
    for ( int i = 0 ; i < 10 ; i++ )
        scanf("%d", &arr[i]);
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array:");
    printArray(arr, n);
}