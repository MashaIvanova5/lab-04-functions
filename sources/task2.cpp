#include <vector>
#include <lab05.hpp>
#include <iostream>
#include<limits>
std::pair<float, float> minMax(const std::vector<float>& input) {
  std::pair<float, float> min_Max;
  if (!input.empty()) {
    min_Max.first = std::numeric_limits<float>::max();
    min_Max.second = std::numeric_limits<float>::min();
    for (float v : input) {
      if (min_Max.first > v ) min_Max.first = v;
      if (min_Max.second < v) min_Max.second = v;
    }
  } else {
    min_Max.first = std::numeric_limits<float>::min();
    min_Max.second = std::numeric_limits<float>::max();
  }
  return min_Max;
}