// C Program to Check whether a Number is Prime or Not using Recursion
// number: 3 -> Prime!|number: 5 -> Prime!|number: 21 -> Not Prime!
#include <stdio.h>
int isPrime(int, int);

int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  if (isPrime(num, num / 2) == 1)
  {
    printf("%d is prime!", num);
  }
  else
  {
    printf("%d is not prime!", num);
  }
  return 0;
}

int isPrime(int num, int i)
{
  if (i == 1)
  {
    return 1;
  }
  else
  {
    if (num % i == 0)
    {
      return 0;
    }
    else
    {
      return isPrime(num, i - 1);
    }
  }
}