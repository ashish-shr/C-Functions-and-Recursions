// C program to display N natural odd numbers using Recursion
// limit: 5 -> Natural Numbers: 1 3 5 7 9
#include <stdio.h>
void oddNum(int);

int main()
{
  int limit;
  printf("Limit: ");
  scanf("%d", &limit);
  printf("Odd Numbers:\n");
  oddNum(limit);
  return 0;
}

void oddNum(int num)
{
  if (num != 0)
  {
    oddNum(num - 1);
    printf("%d\n", 2 * num - 1);
  }
}
