#include <stdio.h>
#include <math.h>
void input_line(float *x1, float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("enter 1st point:\n");
  scanf("%f %f",x1,y1);
  printf("enter 2nd point:\n");
  scanf("%f %f",x2,y2);
  printf("enter 3rd point:\n");
  scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  int a,b,c;
  a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
  c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  if((a+b)>c && (b+c)>a && (c+a)>b)
    return 1;
  else
    return 0;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if (istriangle == 1)
    printf("the points (%f,%f),(%f,%f)&(%f,%f) form a triangle",x1,y1,x2,y2,x3,y3);
  else 
    printf("the points (%f,%f),(%f,%f)&(%f,%f) do not form a triangle\n",x1,y1,x2,y2,x3,y3);
}
int main()
{
  float x1,x2,x3,y1,y2,y3;
  input_line(&x1,&y1,&x2,&y2,&x3,&y3);
  int a=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,a);
  return 0;
}
