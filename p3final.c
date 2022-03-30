#include<stdio.h>
int input_number()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
    {
      return(1);
    }
  }
  return(0);
}
void output(int n, int composite)
{
 if(composite==1)
 {
   printf(" %d is  composite\n",n);
 }
 else
 {
   printf("%d is not composite",n);
 }
}
int main()
{
  int x,y;
  x=input_number();
  y=is_composite(x);
  output(x,y);
  return 0;
}
