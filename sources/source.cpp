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
//std::pair<float,float>MinMax()
