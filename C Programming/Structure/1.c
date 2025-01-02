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
	s1.roll = 101;
	s1.cgpa = 9.8;
	s1.grade = 'A';
	
	s2.roll = 102;
	s2.cgpa = 8.5;
	s2.grade = 'A';
	
	printf("\nRoll no. = %d",s1.roll);
	printf("\nCGPA = %.1f",s1.cgpa);
	printf("\nGrade = %c",s1.grade);
	
	printf("\nRoll no. = %d",s2.roll);
	printf("\nCGPA = %.1f",s2.cgpa);
	printf("\nGrade = %c",s2.grade);
	return 0;
}
