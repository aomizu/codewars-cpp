// Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

// https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/train/cpp/6557e2c33974cb203ebe16a8

#include <string>
bool solution(std::string const &str, std::string const &ending) {
  int len = str.length()-1;   
  for(int i=ending.length()-1; i>=0; i--) {
    if(str[len] != ending[i]) {
      return false;
    }
    len--;
  }
  return true;
}