#include<stdio.h>
int main()
{
	int a[100],i,max=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])
		max=a[i];
	}
	printf("%d",max);
	return 0;
	}
	
