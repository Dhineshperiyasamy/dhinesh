#include <stdio.h>

int main() {
	char a[50];
	int j,f=0;
	gets(a);
	for(j=0;j<50;j++)
	{
	if(((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z'))&&(a[j]>='0' && a[j]<='9'))
		{
			
		f=1;
		break;
	}}
	if(f==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}
