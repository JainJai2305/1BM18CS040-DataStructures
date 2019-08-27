#include<stdio.h>
int factorial (int n)
{
	int p=1 ;
	if(n==1)
	{ p= 1 ;}
	else
	{p=n*factorial(n-1) ;}
	return p ;
}
int main()
{
	int a ;
	printf("enter a positive number\n") ;
	scanf("%d",&a) ;
	printf("the factorial of number is\n") ;
	printf("%d\n",factorial (a)) ;
}		

