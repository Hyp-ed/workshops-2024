#include "03_vectors.hpp"

#include <cmath>

namespace hyped::workshop {

double sum(const std::vector<double> v)
{
  double total = 0;

  for (int i = 0; i < v.size(); i++) {
    total += v[i];
  }
  return total;
}

double absoluteSum(const std::vector<double> v)
{
  double total = 0;

  for (int i = 0; i < v.size(); i++) {
    total += abs(v[i]);
  }
  return total;
}

double average(const std::vector<double> v)
{
  if (v.empty()) { return 0; }
  double total   = sum(v);
  double average = total / v.size();
  return average;
}

unsigned countNegatives(const std::vector<double> v)
{
  int negs = 0;

  for (int i = 0; i < v.size(); i++) {
    if (v[i] < 0) { negs++; }
  }
  return negs;
}

}  // namespace hyped::workshop
