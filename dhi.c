include<stdio.h>
 
int main()
{
  char ch;
 
  printf("enter the  any character\n");
  scanf("%c", &ch);
 
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z'))
 
   printf("alphabet");
 
   else
      printf("No");
return 0;
}
