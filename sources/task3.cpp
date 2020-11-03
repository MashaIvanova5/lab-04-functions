#include <vector>
#include <lab05.hpp>
#include <iostream>
#include<limits>
int argmax(const std::vector<float>& input) {
  int k = -1;
  float m = std::numeric_limits<int>::min();
  for (unsigned int i=0; i < input.size(); i++) {
    if (m < input[i]) {
      m = input[i];
      k = i;
    }
  }
  return k;
}
