#include <stdio.h>
int main()
{
  int n1, n2, i, temp, num, c;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &n1, &n2);
  printf("Armstrong numbers between %d an %d are: ", n1, n2);
  for(i=n1+1; i<n2; ++i)
  {
      temp=i;
      num=0;
      while(temp!=0)
      {
          r=(temp%10);
          num+=c*c*c;
          temp/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
