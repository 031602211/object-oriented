#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,sum,c;
	scanf("%d %d",&a,&b);
	sum=a+b;
	c=abs(sum);
	if(c<1000)
	    printf("%d",sum);
	if(c>=1000&&c<1000000)
	    printf("%d,%03d",sum/1000,c%1000);
	if(c>=1000000)
		printf("%d,%03d,%03d",sum/1000000,(c/1000)%1000,c%1000);
	return 0;
} 