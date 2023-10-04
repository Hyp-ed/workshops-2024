#include "04_isprime.hpp"

namespace hyped::workshop {

bool isPrime(int n)
{
  // Some basic and easy checks to narrow down.
  if (n <= 1) { return false; }  // Numbers smaller than 2 cannot be prime
  if (n == 2) { return true; }   // Only even prime number.

  // Iterate through n/2 if we can divide with i easily, then number is NOT prime.
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) { return false; }
  }
  // If all have been checked, then it must be prime
  return true;
}

}  // namespace hyped::workshop