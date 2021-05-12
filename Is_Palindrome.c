#include <stdio.h>
int main()
{
  int the_number, detector, pivot, sum = 0;
  printf("Please, type a number: \n");
  scanf("%d",&the_number);
  detector = the_number;
  while(the_number > 0)
  {
    pivot = the_number % 10;
    sum = (sum * 10) + pivot;
    the_number = the_number / 10;
  }
  if(sum == detector){
    printf("The number typed is a palindrome \n");
  } else {
    printf("The number typed is not a palindrome \n");
  }
  printf("The reversed number is: %d \n",sum);
  return 0;
}