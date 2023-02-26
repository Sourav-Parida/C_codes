#include<stdio.h>

struct STUD{
	char name[20];
	char dept[10];
	char gen[10];
	int roll;
	int age;
	float cgpa;
	float mark[3];
	}stu[10];
	
void main(){
	for(int i=0;i<2;i++){
		printf("\n Enter the details of student %d \n",i+1);
		printf("Enter the name:");
		scanf("%s",&stu[i].name);
		printf("Enter the dept:");
		scanf("%s",&stu[i].dept);
		printf("Enter the gender:");
		scanf("%s",&stu[i].gen);
		printf("Enter the roll:");
		scanf("%d",&stu[i].roll);
		printf("Enter the age:");
		scanf("%d",&stu[i].age);
		printf("Enter the cgpa:");
		scanf("%f",&stu[i].cgpa);
		for (int j=0;j<3;j++){
			printf("Enter the mark in sub %d:",j+1);
			scanf("%f",&stu[i].mark[j]);
			}
		}
		for(int i=0;i<2;i++){
		printf("\n Details of student %d \n",i+1);
		printf("Name is %s \n",stu[i].name);
		printf("dept is %s\n",stu[i].dept);
		printf("roll is %d \n",stu[i].roll);
		printf("gender is %s \n",stu[i].gen);
		printf("age is %d \n",stu[i].age);
		printf("cgpa is %.2f \n",stu[i].cgpa);
		for(int j=0;j<3;j++){
			printf("mark in sub %d is =",j+1);
			printf("%.2f \n",stu[i].mark[j]);
			}
		}
	}
