#include<stdio.h>
int input_side()
{
  int a;
  printf("enter the dimensions\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  int isscalene;
  if(a==b || b==c || a==c)
  {
    isscalene=0;
  }
  else
  {
    isscalene=1;
  }
  return isscalene;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("The triangle is scalene ");
  }
  else
  {
    printf("The triangle not  scalene");
  }
}
int main()
{
  int x,y,z,isscalene;
  x=input_side();
  y=input_side();
  z=input_side();
  isscalene=check_scalene(x,y,z);
  output(x,y,z,isscalene);
  return 0;
}