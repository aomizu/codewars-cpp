// You might know some pretty large perfect squares. But what about the NEXT one?

// Complete the findNextSquare method that finds the next integral perfect square after the one passed as a parameter. Recall that an integral perfect square is an integer n such that sqrt(n) is also an integer.

// If the parameter is itself not a perfect square then -1 should be returned. You may assume the parameter is non-negative.

// https://www.codewars.com/kata/56269eb78ad2e4ced1000013/train/cpp/6557ff563974cb151fbe1d41

#include <math.h>

long int findNextSquare(long int sq) {
  if (sqrt(sq) == (int)sqrt(sq)) {
    return pow((sqrt(sq)+1),2);
  }
  return -1;
}