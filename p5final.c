#include<stdio.h>
int input()
{
  int n;
  printf("enter the numbers\n");
  scanf("%d",&n);
  return n;
}
int gcd(int a,int b)
{
int t;
  while(b!=0)
    {
      t=b;
      b=a%b;
      a=t;
    }
  return a;
}
void output(int a,int b,int gcd)
{
  printf("The gcd of %d,%d is %d",a,b,gcd);
}
int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=gcd(x,y);
  output(x,y,z);
  return 0;
}