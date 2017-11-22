/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : strstr - locate a substring ( needle ) in a string ( haystack )
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int strStr(const string &haystack, const string &needle);
}obj;

void preComp(string s, vector<int> &A){
    int length = s.size();
    A[0] = -1;
    int k;
    for(int i = 1; i < s.size(); i++)
    {
        k = A[i-1];
        while(k >= 0){
            if(A[k] == s[i-1])
            {
                break;
            }
            else
            {
                k = A[k];
            }
        }
        A[i] = k+1;
    }
}

int Solution::strStr(const string &haystack, const string &needle)
{
    int haystack_size = haystack.size();
    int needle_size = needle.size();
    int flag = 0;

    if(haystack_size < needle_size){
        return -1;
    }

    if(needle_size == 0){
        return 0;
    }

    vector<int> pre(needle_size);

    preComp(needle, pre);

    int for_hay = 0;
    int for_needle = 0;
    int sol;

    while(for_hay < haystack_size){
        if(for_needle== -1){
            for_hay++;
          for_needle = 0;
        }
        else if(haystack[for_hay] == needle[for_needle]){
            for_hay++;
            for_needle++;
            if(for_needle == needle_size){
                flag = 1;
                break;
            }
        }
        else{
          for_needle = pre[for_needle];
        }
        if(flag == 1){
            break;
        }
    }

    if(flag == 1){
        return (for_hay)-(for_needle);
    }

    return -1;
}

int main()
{
  int result;
  string s = "kaaaabaaappp";
  cout<<"In kaaaabaaappp substring aaaa is found at index = ";
  result=obj.strStr("kaaaabaaappp", "aabaa");
  cout<<result<<endl;
  return 0;
}
