#include<stdio.h>
int main()
{
    int i,a=-1,b=1,n,c;
    printf("enter the nunber");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
    }
    return 0;
}
