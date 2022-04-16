#include<stdio.h>
int main()
{
  int a, price;
  printf("\nselect your menu \n1.pizza\n2.burger\n3.pasta\n4.french fries\n5.sandwich\n);
  switch(a)
  {
    case 1:
      printf("\n you have selected pizza.\n);
      scanf("%d", &price);
      printf("price=%d", price);
      break; 
    case 2:
      printf("\n you have selected burger.\n);
      scanf("%d",&price);
      printf("price=%d", price);
      break;
    case 3:
      printf("\n you have selected pasta./n);
      scanf("%d", &price);
      printf("price=%d", price);
      break;
    case 4:
      printf("\n you have selected french fries);
      scanf("%d", &price);
      printf("price=%d", price);
      break;
    case 5:
      printf("\n ypu have selected sandwich);
      scanf("%d", &price);
      printf("price=%d",price);
      break;
  }    
   
    
  
