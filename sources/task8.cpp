#include <vector>
#include <lab05.hpp>
#include <iostream>
#include<limits>
std::string join(const std::vector<std::string>& str, const std::string& sep) {
  std::string s;
  for (const std::string& i : str) {
    s += (i + sep);
  }
  s.erase(static_cast<int>(s.size()) - static_cast<int>(sep.size()));
  return s;
}