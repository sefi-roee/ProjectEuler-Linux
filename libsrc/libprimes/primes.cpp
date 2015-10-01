#include "primes.h"

#include <cmath>

bool
is_prime (long long n)
{
  if (n == 2 || n == 3)
    return true;
  
  if (n % 2 == 0)
    return false;

  for (long long i = 3; i <= (long long) sqrtl (n); i += 2)
    if (n % i == 0)
      return false;

  return true;
}

bool
prime_sieve (long n, long* &primes, int &count)
{
  long size = (long)((n + 1) / 2);
  bool *sieve = new bool[size];
  long limit = (long)(sqrt(n));
  long val;
 
  
  for (long i = 0; i < size; i++)
    sieve[i] = true;
  
  for (long i = 1; i < limit; i++)
  {
    if (sieve[i])
    {
      val = 2 * i + 1;
      for (long j = i + val; j < size; j += val)
	sieve[j] = false;
    }
  }
  
  count = 0;
  for (long i = 0; i < size; i++)
  {
    if (sieve[i])
      count++;
  }
  
  primes = new long[count];
  primes[0] = 2;
  for (long i = 1, j = 1; i < size; i++)
  {
    if (sieve[i])
    {
      primes[j++] = 2 * i + 1;
    }
  }
  
  delete[] sieve;
  
  return true;
}
  
bool
full_prime_sieve (long n, bool* &primes)
{
  primes = new bool[n + 1];
  long limit = (long)(sqrt(n));
  
  for (long i = 0; i < (n + 1); i++)
    primes[i] = true;
  
  primes[0] = primes[1] = false;
  
  for (long i = 2; i <= limit; i++)
  {
    if (primes[i])
    {
      for (long j = 2 * i; j < (n + 1); j += i)
	primes[j] = false;
    }
  }
  
  return true;
}
  
  
  
      
    
  
  
  
