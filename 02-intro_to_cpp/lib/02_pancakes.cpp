#include "02_pancakes.hpp"

namespace hyped::workshop {

PancakesEatenBy mostPancakesEaten(const std::vector<PancakesEatenBy> all_pancakes_eaten)
{
  int max   = 0;
  int index = 0;

  for (int i = 0; i < all_pancakes_eaten.size(); i++) {
    if (all_pancakes_eaten[i].num_pancakes_eaten > max) {
      index = i;
      max   = all_pancakes_eaten[i].num_pancakes_eaten;
    }
  }

  return {all_pancakes_eaten[index].name, max};
}

std::vector<PancakesEatenBy> moreThanNPancakesEaten(
  const std::vector<PancakesEatenBy> all_pancakes_eaten, const int n)
{
  std::vector<PancakesEatenBy> more;
  for (int i = 0; i < all_pancakes_eaten.size(); i++) {
    if (all_pancakes_eaten[i].num_pancakes_eaten > n) { more.push_back(all_pancakes_eaten[i]); }
  }
  return std::vector<PancakesEatenBy>(more);
}

}  // namespace hyped::workshop