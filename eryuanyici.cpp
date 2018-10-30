#include<stdio.h>
int main(){
	double a,b,c,d,e,f,x,y;
	printf("please input a\n");
	scanf("%lf",&a);
	printf("please input b\n");
	scanf("%lf",&b);
	printf("please input c\n");
	scanf("%lf",&c);
	printf("please input d\n");
	scanf("%lf",&d);
	printf("please input e\n");
	scanf("%lf",&e);
	printf("please input f\n");
	scanf("%lf",&f);
	if (a*e==b*d){ 
	if (a*f==c*d)
	  printf("有无穷多解\n");
	  else{
	    printf("无解\n");
	}
	      }
	else{
	x=(b*f-c*e)/(b*d-a*e);
	y=(c*d-a*f)/(b*d-a*e);
	printf("x=%lf\n y=%lf",x,y);	
	   } 
} 
