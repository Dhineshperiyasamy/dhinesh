#include <stdio.h>

int main(void) {
	float n,sum=0,i,avg;
	printf("enter the no.");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	avg=sum/n;
	printf("avg is %f",avg);
	return 0;
}
