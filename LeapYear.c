#include <stdio.h>
int main(){
	int i,j,n,y,m,d,d0;
	int x[12];
	x[1]=31;x[3]=31;x[4]=30;x[5]=31;x[6]=30;x[7]=31;x[8]=31;x[9]=30;x[10]=31;x[11]=30;x[12]=31;
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{   int d1=0;
		scanf("%d %d %d",&y,&m,&d);
		if(y%100!=0&&y%4==0)
		    x[2]=29;
		else
		{
		if(y%100==0&&y%400==0)
		    x[2]=29;
		    else
		    x[2]=28;
	    }
		 //x[2]=28;
		
		for(j=1;j<m;j++)
		d1=d1+x[j];
		d0=d1+d;
		printf("%d\n",d0);
	}
	return 0;
}
