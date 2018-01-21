#include <stdio.h>
int main()
{
int i,a,b;
printf("/n enter the odd number b/w ato b");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2==1)
{
printf("%d",i);
}
}
return 0;
}
