#include<stdio.h>
int s(int n){
	if(n!=0)
	return n+s(n-1);
	else
	return n;
}
int main()
{
	int n;
	printf("Enter a Number");
	scanf("%d",&n);
	printf("sum of first%dnatural number is %d\n",n,s(n));
	return 0;
}
