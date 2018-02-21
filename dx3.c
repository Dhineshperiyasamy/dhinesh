#include <stdio.h>
int main(void)
{
	char n[40];
    int i,l;
    scanf("%s",&n);
    l=strlen(n);
    for(i=0;i<l;i++)
    {
        printf("\t%c",n[i]);
    }
return 0;
}
