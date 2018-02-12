#include <stdio.h>

int main(void) {
	int n,min,max,i,b[50];
	printf("enter the no");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	min=max=b[0];
	for(i=0;i<n;i++)
	{
	if(b[i]>max)
		max=a[i];
	else
		min=b[i];
	}
	printf("min and max no is%d %d",min,max);
	return 0;
}
