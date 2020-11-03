// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_LAB05_HPP_
#define INCLUDE_LAB05_HPP_

#endif // INCLUDE_HEADER_HPP_
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include <utility>
#include <vector>

float mean(const std::vector<float>&input);
std::pair<float, float> minMax(const std::vector<float>& input);
int argmax(const std::vector<float>& input);
void sort(std::vector<float>& input);
bool remove_first_negative_element(std::vector<int>& vec,int& removed_element);
std::string replace(const std::string& str, const std::string& old, const std::string& new_string);
std::vector<std::string> split(std::string& str, char sep);
std::string join(const std::vector<std::string>& str, const std::string& sep);
//#endif INCLUDE_LAB05_HPP_
