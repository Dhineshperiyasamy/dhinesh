#include<stdio.h>
int main()
{
char a[100];
int i,count=1,b,null;
printf("enter the sentence");
scanf("%s",&a);
gets(a);
for(i=0;a[i]!=null;i++)
{
if(a[i]==' ')
b=++count;
}
printf("%d",b);
return 0;
}
