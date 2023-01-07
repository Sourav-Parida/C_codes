#include <stdio.h>
#include <stdlib.h>
void main(){
	int* ptr;
	int i;
	ptr = (int*)calloc(10, sizeof(int));
	if (ptr == NULL){
		printf("Memory not allocated.\n");
		exit(0);
	}
	else{
		printf("Memory successfully allocated using calloc.\n");
		for (i = 0; i < 10; ++i) {
			scanf("%d",ptr[i]);
		}
		printf("The elements of the array are: ");
		for (i = 0; i < 10; ++i) {
			printf("%d, ", ptr[i]);
		}
	}
	free(ptr);
}
