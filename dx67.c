#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=n;i<100;i++)
    {
      if(i%10==0)
      {
    
      printf("%d",i);
      break;
      }  
    }
    return 0;
}
