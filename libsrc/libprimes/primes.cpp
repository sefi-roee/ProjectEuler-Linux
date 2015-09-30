#include "primes.h"

#include <cmath>

bool
is_prime (long long n)
{
  if (n % 2 == 0)
    return false;

  for (long long i = 3; i <= (long long) sqrtl (n); i += 2)
    if (n % i == 0)
      return false;

  return true;
}
