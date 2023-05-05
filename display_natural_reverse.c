// C program to display N natural numbers in reverse order using Recursion
// limit: 5 -> Natural Numbers: 5 4 3 2 1
#include <stdio.h>
void naturalNum(int);

int main()
{
  int limit;
  printf("Limit: ");
  scanf("%d", &limit);
  printf("Natural Numbers:\n");
  naturalNum(limit);
  return 0;
}

void naturalNum(int num)
{
  if (num == 0 || num == 1)
  {
    printf("%d\n", num);
  }
  else
  {
    printf("%d\n", num);
    naturalNum(num - 1);
  }
}