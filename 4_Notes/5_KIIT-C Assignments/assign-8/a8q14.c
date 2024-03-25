#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, *ptr, sum = 0;
	ptr = (int*) malloc(10 * sizeof(int));
	if(ptr == NULL) {
    	printf("Error! memory not allocated.");
    	exit(0);
	}
	printf("Enter elements: ");
	for(i = 0; i < 10; ++i) {
    	scanf("%d", ptr + i);
    	sum += *(ptr + i);
	}	
	printf("Sum = %d", sum);
	free(ptr);	
	return 0;
}