#include<stdio.h>

struct EMPLOYEE{
	char emp_name[20];
    int emp_id;
	char dept[10];
    char desig[10];
    int age;
    float salary;
	char gen[10];
	};
	
void main(){
    struct EMPLOYEE *emp;
	for(int i=0;i<2;i++){
		printf("\n Enter the details of employee %d \n",i+1);
		printf("Enter the emp.name:");
		scanf("%s",&emp[i].emp_name);
        printf("Enter the emp.id:");
		scanf("%d",&emp[i].emp_id);
		printf("Enter the department:");
		scanf("%s",&emp[i].dept);
        printf("Enter the designation:");
		scanf("%s",&emp[i].desig);
        printf("Enter the age:");
		scanf("%d",&emp[i].age);
        printf("Enter the salary:");
		scanf("%f",&emp[i].salary);
		printf("Enter the gender:");
		scanf("%s",&emp[i].gen);
		}

		for(int i=0;i<2;i++){
		printf("\n Details of student %d \n",i+1);
		printf("Name is %s \n",emp[i].emp_name);
		printf("emp.id is %d\n",emp[i].emp_id);
		printf("dept is %s \n",emp[i].dept);
		printf("desig is %s \n",emp[i].desig);
		printf("age is %d \n",emp[i].age);
		printf("salary is %.2f \n",emp[i].salary);
        printf("gender is %s \n",emp[i].gen);
		}
	}
