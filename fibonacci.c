#include<stdio.h>
int fibonacci (int n)
{
	int p=0 ;
	if(n==1)
	{p=0 ;}
	else if(n==2)
	{p=1 ;}
	else
	{p= fibonacci(n-1)+fibonacci(n-2) ;}
	return p ;
}
int main()
{
	int a ;
	printf("enter a number\n") ;
	scanf("%d",&a) ;
	printf("the %dth postion fibonacci number is:\n",a ) ;
	printf("%d\n",fibonacci (a)) ;
}	
		
	
	
