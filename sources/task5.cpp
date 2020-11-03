#include <vector>
#include <lab05.hpp>
#include <iostream>
#include<limits>
bool remove_first_negative_element(std::vector<int>& vec,
                                   int& removed_element) {
  if (!vec.empty()) {
    for (unsigned int i = 0; i < vec.size(); i++) {
      if (vec[i] < 0) {
        removed_element = vec[i];
        vec.erase(vec.begin() + i);
      }
      if (removed_element != 0) i = vec.size();
    }

    if (removed_element != 0)
      return true;
    else
      return false;
  } else {
    return false;
  }
}