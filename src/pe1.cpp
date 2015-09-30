#include <iostream>

#include "euler.h"

using namespace std;

int
main ()
{
  struct timeval start, end;
  gettimeofday (&start, NULL);

  const int TOP = 1000;
  int sum = 0;

  for (int i = 1; i < TOP; i++)
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;

  gettimeofday (&end, NULL);

  cout << "Project Euler #1" << endl;
  cout << sum << endl;
  cout << "Total time: " << time_str(start, end) << endl;

  return 0;
}
