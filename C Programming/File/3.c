#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1 = fopen("first.txt","r");
	char text[100];
	if(fp1==NULL)
	{
		printf("Error in opening the file");
	}
	else
	{
		while(fgets(text,sizeof(text),fp1))
		{
			printf("%s",text);	
		}	
	}
	fclose(fp1);
	return 0;
}
