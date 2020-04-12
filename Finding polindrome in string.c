
#include<stdio.h>
int main()
{
  char str[100];
  int i=0,j,n;
 printf("enter the string");
 gets(str);
 while(str[i]!='\0')
  n++;
  i++;
  i=0;
  j=n-i;
  while(i<=n/2)
  {
    if(str[i]==str[j])
    {
    i++;
    j--;
    
  }
  else
  break;
  }
  if(i>=j)
  printf("\n polindrome");
  else
  printf("\n not polindrome");
  return 0;
  
}
