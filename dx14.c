#include<stdio.h>
int main()
{
    char a[100];
    int i,b=0;
    printf("enter the number");
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
    if((a[i]==0)||(a[i]==1))
    {
        b=1;
    }
    else
    b=0;
    }
    if(b=1)
        printf("yes");
    
    else
    printf("no");
    return 0;
}
