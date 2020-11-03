#include <vector>
#include <lab05.hpp>
#include <iostream>
#include<limits>
std::vector<std::string> split(std::string& str, char sep) {
  std::string str1;
  std::vector<std::string> st;
  str1 = str;
  auto n = static_cast<int>(str.find(sep));
  while (n != -1 && static_cast<int>(str1.length() != 1)) {
    std::string s = str1.substr(0, str1.find(sep));
    st.emplace_back(s);
    str1.erase(0, static_cast<int>(s.size() + 1));
    n = static_cast<int>(str1.find(sep));
  }
  if (!str.empty() && str1[0] != sep) {
    st.emplace_back(str1);
  }
  return st;
}