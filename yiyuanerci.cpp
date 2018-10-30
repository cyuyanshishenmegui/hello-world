#include<stdio.h>
#include<math.h>
int main()
{
    double delta,a,b,c,x1,x2;
    printf("a\nb\nc\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    delta=b*b-4*a*c;
    if(delta==0)
	{
       x1=x2=-a/2*b;
       printf("x1=x2=%lf",x1); 
    }
    else{
    	if(delta>0)
    {
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("x1=%lf x2=%lf",x1,x2);
    }
	    else
    printf("нч╫Б"); 
    }

}
