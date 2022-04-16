#include<stdio.h>
int main()
  {
  int x,y;
  printf("enter value of x:");
  scanf("%d", &x);
  printf("enter value of y:");
  scanf("%d", &y);
  int temp = x;
  x=y;
  y=temp;
  printf("\n after swapping: x=%d", x,y);
  printf("\n after swapping: y=%d, y,x);
  return0;
  }
