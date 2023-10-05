#include "04_isprime.hpp"
#include "cmath"

namespace hyped::workshop {
bool isPrime(int n)
{
  if (n <= 1) {
    return false;
  } else if (n == 2) {
    return true;
  } else {
    for (int i = 2; i <= ceil(sqrt(n)); i++) {
      if (n % i == 0) { return false; }
    }
    return true;
  }
}
}  // namespace hyped::workshop