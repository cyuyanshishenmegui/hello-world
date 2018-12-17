#include<stdio.h>
int main()
{
	int q,i,j,k,l,g,temp;
	int m,n,z,y,u,r;
	int a=0,s=0;
	double f,d;
	
	for(q=100;q<10000;q++)
	{
		y=1,r=1,u=1,d=1.00;
		for(g=2;g<q;g++)
		{
			f=q%g;
			d=d*f;
		}
		int w=q;
		int p[400],sum=0,pre=0,cul=1;
		i=0;
		while(w>0) 
		{
		    p[i]=w%10;
		    w=w/10;
			sum=sum+p[i];
			pre=pre+p[i]*p[i];
			cul=cul*p[i];
			i++;
		}
		if(sum>2){
		for(j=2;j<sum;j++)
		{
		    m=sum%j;
			y=y*m;
		}
	    }
	    else
	    y=1;
	    if(pre>2){
		for(k=2;k<pre;k++)
		{
		
			n=pre%k;
		    u=u*n;
		}}
		else
		u=1;
		if(cul>2){
		for(l=2;l<cul;l++)
		{
			
			z=cul%l;
			r=r*z;
		}}
		else
		if(cul==0){
			r=0;}
		else
		r=1;
		
		
	    if(r!=0 && u!=0 && y!=0 && d!=0){
	    printf("%d\n",q);
	    a=a+1;
	    s=s+q;
	    if(q>temp){
	temp=q;}
	}}
	printf("超级素数的个数为：%d\n超级素数的和为：%d\n最大的超级素数为:%d",a,s,temp);
	
	return 0;
}
