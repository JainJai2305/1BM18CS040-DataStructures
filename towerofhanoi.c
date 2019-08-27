# include <stdio.h>
# include<string.h>
void tower(int n,char start ,char med,char end)
{
	if(n==1)
	{
		printf("move disc 1 from %c to %c\n",start,end) ;
		return ;
	}
	tower(n-1,start,end,med) ;
	printf("move disc %d from %c to %c\n",n,start,end) ;
	tower(n-1,med,start,end) ;
}
int main()
{
	int n ;
	printf("enter the number of discs\n") ;
	scanf("%d",&n) ;
	tower(n,'A','B','C') ;
	return 0 ;
}		
