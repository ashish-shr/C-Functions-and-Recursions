// C program to count digits of a number using recursion
// number: 321 -> count: 3
#include <stdio.h>
int countDigits(int);

int main()
{
  int num, count = 0;
  printf("Enter the number: ");
  scanf("%d", &num);
  count = countDigits(num);
  printf("Digit Count: %d", count);
  return 0;
}

int countDigits(int num)
{
  int count = 0;
  if (num > 0)
  {
    count++;
    count = count + countDigits(num / 10);
  }
  return count;
}