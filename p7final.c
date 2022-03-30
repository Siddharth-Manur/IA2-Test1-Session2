#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle n;
  printf("Enter the base and altitude of the triangle ");
  scanf("%f %f",&n.base,&n.altitude);
  return n;
}
void find_area(Triangle *t)
{
  t->area = 0.5 * t->base * t->altitude;
}
void output(Triangle t)
{
  printf("The area of triangle of base %.2f and altitude %.2f is %.2f",t.base,t.altitude,t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}