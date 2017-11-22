/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Check if power of 2 or not
 Example     : 128 is a power of 2
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int power(string A);
}obj;

int Solution::power(string A)
{

    long long  main_number = 0;
    int start=0;
    int len = A.size();

    while(start<len)
    {
        main_number = main_number*10+(A[start]-'0');
        start++;
        //cout<<"k="<<main_number<<endl;
    }

    if(main_number == 1)
    {
      return 0;
    }

    int number_minus_one = main_number-1;

    int s = main_number & number_minus_one;

    if((main_number & number_minus_one) == 0)
    {
      return 1;
    }

    else
        return 0;
}

int main()
{
  int result;
  string s = "126";
  result=obj.power(s);
  cout <<"0 = Not a power of 2    AND    1 = power of 2   "<<endl;
  cout<< "128 = "<<result<<endl;
  return 0;
}
