#include<stdio.h>
int f(int n)
{
	if(n!=0)
	return n*f(n-1);
	else 
	return 1;
}
int main ()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	printf("factorial of %d is %d\n",n,f(n));
	return 0;
}
