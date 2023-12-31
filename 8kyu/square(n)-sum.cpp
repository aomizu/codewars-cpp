// Complete the square sum function so that it squares each number passed into it and then sums the results together.

// For example, for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9.

// https://www.codewars.com/kata/515e271a311df0350d00000f/train/cpp/655927e22a3a7919a97175f5

#include <vector>
#include <math.h>

int square_sum(const std::vector<int>& numbers)
{
    int result=0;
    for(int i=0;i<numbers.size();i++) {
      result += pow(numbers[i],2);
    }
    return result;
}