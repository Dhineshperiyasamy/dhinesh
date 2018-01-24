#include <stdio.h>
int main()
{
int a[50],c, i, l;
scanf("%d", &c);
for (i=0;i<c;i++)
scanf("%d",&a[i]);
l=a[0];
for(i=1;i<c;i++)
{
if (l>a[i])
l=a[i];
}
printf("%d",l);
return 0;
}
