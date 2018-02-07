#include <stdio.h>

int main(void) {
	int i,t1=0,t2=1,m,l;
	printf("enter the numbers");
	scanf("%d",&m);
	printf("the fibonacii series:");
	for(i=1;i<=m;++i)
	{
		printf("%d",t1);
		l=t1+t2;
		t1=t2;
		t2=l;
	}
	return 0;
}
