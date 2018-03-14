#include<stdio.h>
int main()
{
  int a,i,f=0;
  scanf("%d",&a);
  for(i=2;i<a;i++)
  {
    if(a%i==0)
    {
   
    	f=1;
    	break;
    }
    
  }
  if(f==0)
  printf("Yes");
  else
  printf("No");
  return 0;

}
