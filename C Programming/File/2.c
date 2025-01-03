#include<stdio.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	fp1 = fopen("first.txt","a");
	fp2 = fopen("second.txt","a");
	fp3 = fopen("third.txt","a");
	fprintf(fp1,"\nThis is second try");
	fprintf(fp1,"\nThis is third try");
	fprintf(fp1,"\nThis is fourth try");
	fprintf(fp1,"\nThis is fifth try");
	fprintf(fp2,"\nThis is second file");
	fprintf(fp3,"\nThis is third file");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
