#include "numbers.h"

unsigned long
gcd (unsigned long a, unsigned long b)
{
  if (b < a)
    return gcd (b, a);

  while (b != 0)
    {
      unsigned r = a % b;
      a = b;
      b = r;
    }
  return a;
}
