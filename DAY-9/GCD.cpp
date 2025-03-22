#include<stdio.h>
int gcd(int m,int n)
{
	if(n!=0)
	return gcd(n,m%n);
	else
	return m;
}
int main()
{
	int m,n;
	printf("Enter 2 Numbers: ");
	scanf("%d%d",&m,&n);
	printf("GCD of %d and %d is %d\n",m,n,gcd(m,n));
	return 0;
}
