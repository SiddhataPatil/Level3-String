/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Longest Palindrome
 Example     : In string s = "kaaaabaaappp"------>aaabaaa
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  string longestPalindrome(string A);
}obj;

string Solution::longestPalindrome(string A) {
 if (A.empty())
  {
    return "";
  }

  if (A.size() == 1)
  {
    return A;
  }

  int start = 0;
  int length = 1;

  for (int i = 0; i < A.size();)
  {
      if (A.size() - i <= length / 2)
      {
        break;
      }

      int j = i;
      int k = i;

      while (k < A.size()-1 && A[k+1] == A[k])
      {
        ++k; // Skip duplicate characters.
      }

      i = k+1;

      while (k < A.size()-1 && j > 0 && A[k + 1] == A[j - 1])
      {
        ++k;
        --j;
      } // Expand.

      int new_length = k - j + 1;

      if (new_length > length)
      {
        start = j;
        length = new_length;
      }
   }
return A.substr(start, length);
}

int main()
{
  string result;
  string s = "kaaaabaaappp";
  result=obj.longestPalindrome(s);
  cout <<"Longest palindromestring =  "<<result<<endl;
  return 0;
}
