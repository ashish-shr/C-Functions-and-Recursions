/* C Program to display the multiplicative table of a number using Recursion
num: 2
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
.........
2 x 10 = 20
*/

#include <stdio.h>
void multiplicativeTable(int, int);

int main()
{
  int num;
  printf("Number: ");
  scanf("%d", &num);
  multiplicativeTable(num, 1);
  return 0;
}

void multiplicativeTable(int n, int i)
{
  if (i > 10)
  {
    return; // Stop recursion when i exceeds 10
  }
  printf("%d x %d = %d\n", n, i, n * i);
  multiplicativeTable(n, i + 1);
}