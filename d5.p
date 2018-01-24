#include<stdio.h>
void main()
{
int j, n, f=0;
printf("Enter the any no. : ");
scanf("%d",&n);
for(j=0;j<=n;j++)
{
f=f*j;
}
printf("Factorial =%d ",f);
}
