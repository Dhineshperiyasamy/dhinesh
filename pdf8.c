#include<stdio.h>
#include<string.h>
int main()
{
	char d[10];
	int j,m,count=0;
	scanf("%s",d);
	m=strlen(d);
	for(j=0;j<m;j++)
	{
	if(d[j]=='1'||d[j]=='2'||d[j]=='3'||d[j]=='4'||d[j]=='5'||d[j]=='6'||d[j]=='7'||d[j]=='8'||d[j]=='9'||d[j]=='0')
{
	count++;
}
}
	if(count==0)
	{
	printf(" not a numeric number");
	}
	else
	printf(" numeric number");
	}
