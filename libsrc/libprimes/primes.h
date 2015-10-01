#pragma once

#include <inttypes.h>

bool is_prime (long long n);
bool prime_sieve(long n, long* &primes, int &count);
bool full_prime_sieve(long n, bool* &primes);
