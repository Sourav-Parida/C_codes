#include <stdio.h>
#include <stdlib.h>
void main(){
	int* ptr;
	int mul=1;
	ptr = (int*)calloc(10,sizeof(int));
	if (ptr == NULL){
		printf("Memory not allocated.\n");
		exit(0);
	}
	else{
		printf("Enter elements\n");
		for (int i = 0;i<10;i++) {
			scanf("%d",ptr+i);
		}
		printf("The elements of the array are: ");
		for (int i = 0; i < 10;i++) {
			printf("%d, ",*(ptr+i));
			mul=mul * *(ptr+i);
		}
	}
	printf("\n Multiple of elements is %d",mul);
	free(ptr);
}
