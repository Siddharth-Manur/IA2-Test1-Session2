 #include<stdio.h>
void input_string(char *a)
{
 printf("enter the string \n");
 scanf("%s",a);
}
void str_revers(char *a, char *r)
{
  int x=0;
  for(int i=0;a[i]!=0;i++)
    {
      x=x+1;
    }
  for(int i=0;i<x+1;i++)
    {
      r[i]=a[x-i-1];
    }
}
void output(char *a,char *revers)
{
  printf("The reverse of %s is %s\n",a,revers);
}
int main()
{
  char a[20],r[20];
  input_string(a);
  str_revers(a,r);
  output(a,r);
  return 0;
}