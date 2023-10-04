#include "02_pancakes.hpp"

namespace hyped::workshop {

PancakesEatenBy mostPancakesEaten(const std::vector<PancakesEatenBy> all_pancakes_eaten)
{
  int top_eater = 0;
  PancakesEatenBy to_return;

  for (auto pancake_object : all_pancakes_eaten) {
    if (pancake_object.num_pancakes_eaten > top_eater) {
      top_eater = pancake_object.num_pancakes_eaten;
      to_return = pancake_object;
    }
  }
  return to_return;
}

std::vector<PancakesEatenBy> moreThanNPancakesEaten(
  const std::vector<PancakesEatenBy> all_pancakes_eaten, const int n)
{
  std::vector<PancakesEatenBy> lotsOfPancakes;
  for (auto pancake_object : all_pancakes_eaten) {
    if (pancake_object.num_pancakes_eaten > n) { lotsOfPancakes.push_back(pancake_object); }
  }
  return lotsOfPancakes;
}

}  // namespace hyped::workshop