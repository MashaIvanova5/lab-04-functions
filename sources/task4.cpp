#include <vector>
#include <lab05.hpp>
#include <iostream>
#include<limits>
void sort(std::vector<float>& input) {
  unsigned int f = 0;
  unsigned int i=0;
  float t;
  do {
    for (i=f+1; i < input.size(); i++) {
      if (input[f] > input[i]) {
        t = input[f];
        input[f] = input[i];
        input[i] = t;
      }
    }
    f++;
  } while (f < input.size());
}
