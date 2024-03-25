#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *firstName;
    char *lastName;

    //Entering the length of the first name
    int fn;
    printf("Enter the length of your first name:");
    scanf("%d",&fn);
    // Allocate memory for the first name using malloc
    firstName = (char *)malloc(fn * sizeof(char));
    
    if (firstName == NULL) {
        printf("Memory allocation failed for first name.\n");
        return 1;
    }

    // Input and display the first name
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("First Name: %s\n", firstName);

    //Entering the length of the last name
    int ln;
    printf("Enter the length of your last name:");
    scanf("%d",&ln);

    // Reallocate memory to include space for the last name
    firstName = (char *)realloc(firstName,(fn+ln) * sizeof(char));
    lastName = (char *)malloc(ln * sizeof(char));
    printf("Enter your last name: ");
    scanf("%s", lastName);
    int j=0;
    for(int i=fn;i<=fn+ln;i++){
        firstName[i]=lastName[j];
        j++;
    }
    
    printf("\nFirst Name: %s\n", firstName);
    free(firstName);
    free(lastName);


    return 0; }