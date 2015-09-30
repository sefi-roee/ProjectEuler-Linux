#include "euler.h"

#include <string>

const std::string time_str(struct timeval st, struct timeval en)
{
  int h, m ,s;
  long int ms;
  std::string ret = "";
  
  s = (int)(en.tv_sec - st.tv_sec);
  ms = (long int)(en.tv_usec - st.tv_usec);
  
  if (ms < 0)
  {
    s -= 1;
    ms += 1000000;
  }
  
  m = s / 60;
  s = s % 60;
  h = m / 60;
  m = m % 60;
  
  if (h > 0)
    ret += std::to_string(h) + (h > 1 ? " Hours" : " Hour") + ", ";
  if (m > 0)
    ret += std::to_string(m) + (m > 1 ? " Minutes" : " Minute") + ", ";
  if (s > 0)
    ret += std::to_string(s) + (s > 1 ? " Seconds" : " Second") + ", ";
  if (ms > 0)
    ret += std::to_string(ms) + (ms > 1 ? " Microseconds" : " Microsecond");
  
  return ret;
}
