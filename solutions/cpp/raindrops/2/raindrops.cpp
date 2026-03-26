#include "raindrops.h"
#include <string>

namespace raindrops {
using std::string;

// TODO: add your solution here
string convert(int num) {
  std::string result = "";
  if (num % 3 == 0) {
    result += "Pling";
  }
  if (num % 5 == 0) {
    result += "Plang";
  }
  if (num % 7 == 0) {
    result += "Plong";
  }
  if (result.empty())
  {
    return std::to_string(num);
  }
  return result;
};

} // namespace raindrops
