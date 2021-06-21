#include<stdio.h>
int sumofdigits(int a);
int main()
{
	int a,b;
	printf("Enter any number to find sum of digits");
	scanf("%d",&a);
	b = sumofdigits(a);
	printf("sum of digits%d=%d",a,b);
	return 0;
}
int sumofdigits(int a)
{
	if(a==0)
	return 0;
	
	return((a%10)+sumofdigits(a/10));
}
