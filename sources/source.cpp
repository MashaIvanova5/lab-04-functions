// Copyright 2020 Your Name <your_email>
#include <vector>
#include <lab05.hpp>
#include <iostream>
#include<limits>

float mean(const std::vector<float>&input)
{
    float sum=0;
    for(unsigned int i=0;i<input.size();i++) {
        sum += input[i];
    }
    return!input.empty()?sum/input.size():0;

}
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
std::string join(const std::vector<std::string>& str, const std::string& sep) {
  std::string s;
  for (const std::string& i : str) {
    s += (i + sep);
  }
  s.erase(static_cast<int>(s.size()) - static_cast<int>(sep.size()));
  return s;
}




