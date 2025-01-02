#include<stdio.h>
struct Student
{
	int roll;
	float cgpa;
	char grade;
};
int main()
{
	struct Student s1,s2;
	printf("\nEnter the roll no. = ");
	scanf("%d",&s1.roll);
	printf("\nEnter the cgpa = ");
	scanf("%f",&s1.cgpa);
	printf("\nEnter the grade = ");
	scanf(" %c",&s1.grade);
	
	printf("\nEnter the roll no. = ");
	scanf("%d",&s2.roll);
	printf("\nEnter the cgpa = ");
	scanf("%f",&s2.cgpa);
	printf("\nEnter the grade = ");
	scanf(" %c",&s2.grade);
	
	printf("\nRoll no. = %d",s1.roll);
	printf("\nCGPA = %.1f",s1.cgpa);
	printf("\nGrade = %c",s1.grade);
	
	printf("\nRoll no. = %d",s2.roll);
	printf("\nCGPA = %.1f",s2.cgpa);
	printf("\nGrade = %c",s2.grade);
	return 0;
}
