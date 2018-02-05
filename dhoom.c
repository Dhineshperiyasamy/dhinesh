#include<stdio.h>
int main()
{
	int large,j,a[15];
	printf("enter ten values");
	for(j=0;j<10;j++)
	{
		scanf("%d",&a[j]);
		
	}

                large=a[0];
                for(j=0;j<10;j++)
                {
                	if(a[j]>large)
                	{
                		large=a[j];
                	}
                }
                printf("largest number is %d",large);
                return 0;
}
