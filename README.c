#include<stdio.h>
int main()
{
int a,b;
printf("\nenter two numbers:");
scanf("%d%d",&a,&c);
printf("\nnumber before swapping are:%d%d",a,c);
a=a^c;
c=a^c;
a=a^c;
printf("\nnumbers after swapping:%d%d",a,c);
return 0;
}
