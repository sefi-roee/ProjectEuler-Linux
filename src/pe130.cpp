#include <iostream>

#include "euler.h"
#include "primes.h"
#include "numbers.h"

using namespace std;

long
A (long n)
{
  long i = 1;
  long a = 1 % n;

  while (a != 0)
    {
      i += 1;
      a = (a * 10 + 1) % n;
    }

  return i;
}

int
main ()
{
  struct timeval start, end;
  gettimeofday (&start, NULL);

  const int TOP = 25;
  bool *primes;
  bool ret;
  long c = 0, tot = 0;

  ret = full_prime_sieve (1000000L, primes);

  for (unsigned long i = 91; i < 1000000L; i++)
    {
      if (primes[i])
	continue;

      if (gcd (i, 10U) != 1)
	continue;

      if ((i - 1) % A (i) == 0)
	{
	  c += 1;
	  tot += i;
	}

      if (c == TOP)
	break;
    }

  gettimeofday (&end, NULL);

  cout << "Project Euler #130" << endl;
  cout << tot << endl;
  cout << "Total time: " << time_str (start, end) << endl;

  return 0;
}
