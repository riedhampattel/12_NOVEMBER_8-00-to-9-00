#include<stdio.h>
int fact(int n);
int main()
{
    int num;
    printf("\nEnter the number = ");
    scanf("%d",&num);
    int ans = fact(num);
    printf("\nFactorial of %d is %d",num,ans);
    return 0;
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}