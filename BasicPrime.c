#include<stdio.h>
int main()
{
	int m,i;
	double c=1.00,b;
	scanf("%d",&m);
    for(i=2;i<m;i++)
	{
		
		b=m%i;
		c=c*b;
	} 
	if(c!=0)
	printf("%d������",m);
	else
	printf("%d��������",m);
	return 0;
} 
