
#include<stdio.h>
int main()
{
int b,count=0;
printf("enter the number.");
scanf("%d",&b);
while(b!=0)
{
b=b/10;
++count;
}
printf("count%d",count);
return 0;
}
