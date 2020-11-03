#include <vector>
#include <lab05.hpp>
#include <iostream>
#include<limits>
std::string replace(const std::string& str, const std::string& old,
                    const std::string& new_string) {
  std::string str1;
  str1 = str;
  auto n = static_cast<int>(str.find(old));
  while (n != -1) {
    str1.replace(n, new_string.length(), new_string);
    n = static_cast<int>(str1.find(old));
  }
  return str1;
}
