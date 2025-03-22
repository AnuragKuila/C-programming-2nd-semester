#include<stdio.h>
int ss(int n);
int main()
{
	int a;
	printf("Enter a Number: ");
	scanf("%d",&a);
	printf("Sum of Square of natural number is %d\n",ss(a));
	return 0;
}
int ss(int x)
{
	int i,ss=0;
	for (i=1;i<=x;i++)
	ss=ss+i*i;
	return ss;
}
