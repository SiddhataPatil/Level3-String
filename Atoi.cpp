/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Atoi
 Example     :Input : "9 2704" Output : 9
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
 int atoi(const string &A) ;
}obj;

int Solution::atoi(const string &A)
{
    if(A.size() == 0)
    {
        return 0;
    }

    int i = 0;
    int negative = 0;
    long long int result;

    while(isspace(A[i]))
    {
        i++;
        if(i == A.size())
        {
            return 0;
        }
    }

    if(!isdigit(A[i]))
    {
        if((A[i] != '-') && (A[i] != '+'))
        {
            return 0;
        }
        else
        {
            if(i >= A.size()-1)
            {
                return 0;
            }

            else if(i < A.size()-1)
            {
                if(!isdigit(A[i+1]))
                {
                    return 0;
                }
            }
        i++;
        }
    }

    if(i != 0)
    {
        if(A[i-1] == '-')
        {
            negative  = 1;
        }
    }

    string B = "";

    while(i < A.size())
    {
        B = B + A[i];

        if(stol(B) >= INT_MAX)
        {
            break;
        }

        i++;

        if(isspace(A[i]) || !isdigit(A[i]))
        {
            break;
        }
    }

    result = stol(B);

    if(negative  == 1)
    {
        result = -result;
    }

    if(result > INT_MAX)
    {
        return INT_MAX;
    }

    else if(result < INT_MIN)
    {
        return INT_MIN;
    }

    return (int)result;
}


int main()
{
  int result;
  string s = "9 2704";
  cout<<"String to Integer conversion = ";
  result=obj.atoi(s);
  cout<<result<<endl;
  return 0;
}
