//  C program to calculate length of the string using recursion.
// string: learn -> length: 5
#include <stdio.h>
#define MAX 50
int lenString(char *);

int main()
{
  char str[MAX];
  int length = 0;
  printf("Enter the string: ");
  scanf("%s", str);
  length = lenString(str);
  printf("Length of string: %d", length);
  return 0;
}

int lenString(char *s)
{
  if (*s != '\0')
  {
    return 1 + lenString(s + 1);
  }
  else
  {
    return 0;
  }
}