#include <stdio.h>

int main() {
	int i,n,a,t;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
	t=n%2;
	if(t==0)
	{
		a=n/2;
	}
	else
	{
		a=n/2;
		++a;
		
	}
	printf("avg %d",a);
	return 0;
}
