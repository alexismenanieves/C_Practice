#include <stdio.h>
int main()
{
  int the_number, detector, pivot, sum = 0;
  printf("Please, type a number: \n");
  scanf("%d",&the_number);
  detector = the_number;
  //Take a number, reverse it and compare 
  while(the_number > 0)
  {
    pivot = the_number % 10;
    sum = (sum * 10) + pivot;
    the_number = the_number / 10;
  }
  //If the number is equal to the reversed number
  //then it's a palindrome
  if(sum == detector){
    printf("The number typed is a palindrome \n");
  } else {
    printf("The number typed is not a palindrome \n");
  }
  printf("The reversed number is: %d \n",sum);
  return 0;
}