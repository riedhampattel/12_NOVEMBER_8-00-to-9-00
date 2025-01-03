#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1 = fopen("first.txt","w");	
	fprintf(fp1,"This is first try");
	fclose(fp1);
	return 0;
}
