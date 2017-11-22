/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Palindrome
 Example     : "A man, a plan, a canal: Panama" is a palindrome
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int isPalindrome(string A);
}obj;

int Solution::isPalindrome(string A)
{
            int start = 0;
            int end = (int)A.size() - 1;

            while(start < end)
            {
                while(start < end && !isalnum(A[start]))
                {
                  start++;
                }

                while(start < end && !isalnum(A[end]))
                {
                  end--;
                }

                if (toupper(A[start]) != toupper(A[end]))
                {
                  return 0;
                }
                start++;
                end--;
            }
  return 1;
}

int main()
{
  int result=0;
  result = obj.isPalindrome("A man, a plan, a canal: Panama");
  cout<< "1 = Palindrome ; 0 = Not a Palindrome"<<endl;
  cout<<"A man, a plan, a canal: Panama = ";
  cout<<result<<endl;
  return 0;
}
