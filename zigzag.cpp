/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Zigzag string
 Example     :P.......A........H.......N
              ..A..P....L....S....I...I....G
              ....Y.........I........R
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
 string convert(string, int) ;
}obj;

string Solution::convert(string A, int B)
{
    string main_string = A;
    int row = 0;
    int step = 1;

     if (B <= 1)
     {
        return main_string;
     }

    const int length = (int)main_string.length();

    string *str = new string[B];

    for (int i = 0; i < length; ++i)
    {
        str[row].push_back(main_string[i]);

        if (row == 0)
            step = 1;
        else if (row == B - 1)
            step = -1;

        row += step;
    }

    main_string.clear();
    for (int j = 0; j < B; ++j)
    {
        main_string.append(str[j]);
    }

    delete[] str;
    return main_string;
}


int main()
{
  string result;
  string s = "ABCD";
  cout<<"The zigzag string will look as follows: "<<endl;
  result=obj.convert(s, 2);
  cout<<result[0]<<"......."<<result[1]<<endl;
  cout<<"...."<<result[2]<<"........"<<result[3]<<endl;
  return 0;
}
