#include "03_vectors.hpp"

#include <cmath>

#include <iostream>

namespace hyped::workshop {

double sum(const std::vector<double> v)
{
  double sum = 0.0;
  for (const double value : v) {
    sum += value;
  }
  return sum;
}

double absoluteSum(const std::vector<double> v)
{
  double absolute_sum = 0;
  for (const double value : v) {
    absolute_sum += std::abs(value);
  }
  return absolute_sum;
}

double average(const std::vector<double> v)
{
  double sum    = 0;
  size_t length = v.size();

  // If length = 0, no point in counting just return
  if (length == 0) { return 0; }

  for (const double value : v) {
    sum += value;
  }
  return sum / length;
}

unsigned countNegatives(const std::vector<double> v)
{
  unsigned neg_counter = 0;
  for (const auto value : v) {
    neg_counter = (value < 0) ? neg_counter + 1 : neg_counter;
  }
  return neg_counter;
}

}  // namespace hyped::workshop
