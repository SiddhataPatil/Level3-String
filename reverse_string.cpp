/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Reverse a string
 Example     : 'the sky is blue' = blue is sky the
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  void reverseWords(string &A);
}obj;

void Solution::reverseWords(string &A)
{
  string result = "";
  string main_string = "";

            for (int i = A.length() - 1; i >= 0; i--)
            {
                if (A[i] == ' ')
                {
                    if (main_string.length() == 0)
                    {
                        continue;
                    }
                    // found a word
                    reverse(main_string.begin(), main_string.end());

                    if (result.length() > 0)
                    {
                      result.push_back(' ');
                    }

                    result += main_string;
                    main_string = "";
                    continue;
              }
                main_string.push_back(A[i]);
            }

            if (main_string.length() > 0)
            {
                reverse(main_string.begin(), main_string.end());
                if (result.length() > 0)
                {
                    result.push_back(' ');
                }
                result += main_string;
            }

            A = result;
return;
}

int main()
{
  string s = "the sky is blue";
  obj.reverseWords(s);
  cout<< "Reverse of 'the sky is blue' = "<<s<<endl;
  return 0;
}
