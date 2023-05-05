// C Program to Reverse a Number using Recursion
// number: 143 -> Reversed Number: 341
#include <stdio.h>
int reverseNum(int, int);

int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("Reversed Number: %d", reverseNum(num, 0));
  return 0;
}

int reverseNum(int num, int rev)
{
  if (num == 0)
  {
    return rev;
  }
  else
  {
    return reverseNum(num / 10, (rev * 10 + num % 10));
  }
}
