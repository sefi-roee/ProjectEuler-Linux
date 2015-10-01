#include <iostream>

#include "euler.h"
#include "primes.h"

using namespace std;

int
main ()
{
  struct timeval start, end;
  gettimeofday (&start, NULL);

  const int INDEX = 10001;
  int c = 0;
  long long i = 1;
  
  while (c != INDEX)
  {
    i += 1;
    if (is_prime(i))
      c += 1;
  }

  gettimeofday (&end, NULL);

  cout << "Project Euler #7" << endl;
  cout << i << endl;
  cout << "Total time: " << time_str(start, end) << endl;

  return 0;
}
