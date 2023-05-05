// C Program to Find Fibonacci Series upto n term using Recursion
// limit: 5 -> Series: 0 1 1 2 3
#include <stdio.h>
int fibonacci(int);

int main()
{
  int limit, i;
  printf("Limit: ");
  scanf("%d", &limit);
  for (i = 0; i < limit; i++)
  {
    printf("%d ", fibonacci(i));
  }
  return 0;
}

int fibonacci(int num)
{
  if (num == 0 || num == 1)
  {
    return num;
  }
  else
  {
    return fibonacci(num - 1) + fibonacci(num - 2);
  }
}