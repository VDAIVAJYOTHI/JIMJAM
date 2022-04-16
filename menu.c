#include<stdio.h>
int main()
{
  printf("\n pick your food items: \n1. pizza\n2. burger\n3. pasta\n4. french fries\n5. sandwich\n");
  int choice;  
  scanf("%d", &choice);       
  switch(choice)
  {
    case 1:
      printf("food item : pizza \nprice : 220");
      break;
    case 2:
      printf("food item : burger \nprice :170");
      break;
    case 3:
      printf("food item : pasta \nprice : 150");
      break;
    case 4:
      printf("food item : french fries \nprice : 90");
      break;
    case 5:
      printf("food item : sandwich \nprice : 190");
      break;       
   }  
}  
