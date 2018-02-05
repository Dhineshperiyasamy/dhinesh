#include<stdio.h>
int main()
{
int m,n,temp;
scanf("%d%d",&m,&n);
printf("after swapping numbers are %d %d",m,n);
temp=m;
m=n;
n=temp;
printf("before swapping numbers are %d %d",m,n);
}
