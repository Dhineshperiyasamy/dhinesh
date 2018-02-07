#include<stdio.h>
int main()
{
int n,j;
char s[200];
gets(s);
printf("enter the number of times:");
scanf("%d",&n);
for(j=0;j<n;j++)
{
printf("\n%s",s);
}
return 0;
}
