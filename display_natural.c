// C program to display N natural numbers using Recursion
// limit: 5 -> Natural Numbers: 1 2 3 4 5
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
    naturalNum(num - 1);
    printf("%d\n", num);
  }
}