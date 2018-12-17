#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	int p[8];
	int i=0;
	while(a>0)
	{
		p[i]=a%10;
		a=a/10;
		i++; 
    }
	for(int j=i-1;j>=0;j--)
	{
		printf("%d ",p[j]);
	}
	return 0;
} 
