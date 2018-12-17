#include<stdio.h>
int main()
{
    int N,num,k,n;
    int p[256];
    scanf("%d",&N);
    for(int i=0;i<N;i++)
	{
    n=0;
	scanf("%d",&p[i]);
    k=p[i];
    while(k>0)
       {
       n=n*10+k%10;
       k=k/10;
       }
       if(n==p[i])
        printf("yes\n");
       else
        printf("no\n");
    }
    return 0; 
}

