// Homework 2- Adding two large numbers         by: Konrad Brzoska 10-10-18
#include <iostream>
//#include <bits/stdc++.h> // dont need anymore because only need string, vector and algorith make it complile faster
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string findSum(string str1, string str2)
{
  if (str1.length() > str2.length())
      swap(str1, str2);
  string str = "";
  int n1 = str1.length(), n2 = str2.length();
  int diff = n2 - n1;
  int carry = 0;
  for(int i=n1-1; i>=0; i--)
  {
      int sum = ((str1[i]-'0') + (str2[i+diff]-'0') + carry);
      str.push_back(sum%10+'0');
      carry = sum/10;
  }
  for (int i=n2-n1-1; i>=0; i--)
  {
  int sum = ((str2[i]-'0')+carry);
     str.push_back(sum%10 + '0');
     carry = sum/10;
  }

 if (carry)
     str.push_back(carry+'0');

 reverse(str.begin(), str.end());

 return str;
}
int main()
{
  string str1, str2;
  cout << "Add two large numbers in the following:" << endl;
  cout << "Input first large integer value: ";
  getline(cin, str1);
  cout << "Input second large integer value: ";
  getline(cin, str2);
  cout << "The sum of the large numbers is: " << findSum(str1,str2) << endl;
return 0;
}


/*#include <iostream>
#include <algorithm>// reverse and sort
#include <string>//sting
#include <stdexcept>//try and catch run peice aof code and see if you get error
#include <iomanip>
#include <sstream>
#include <vector>

using namespace std;
//homework instructions
// step 1: check which string is longer
// step 2: - for char (i) in longer string,
//         - if i < length of shorter string,
//         - add the 2 values, record result
// step 3: carry if needed
// step 4: return result
//  iterate through a strin

// Forward declaration
string findSum(string, string); // Only use pass by reference when modifying the args in the function


//

/*
string Sum(string num1, string num2)
{
    int max_length, sum, val1, val2;
    stringstream str1, str2;
    bool num1_longer = false;
    string result;
    if (num1.length() > num2.length())
    {
        max_length = num1.length();
        num1_longer = true;
    }
    else if (num2.length() < num2.length())
      max_length = num2.length();
    else
      max_length = num1.length();
    for (int i = max_length; i > 0; --i)
    {
      try
      {
        str1 << num1[i];
        str2 << num2[i];
        str1 >> val1;
        str2 >> val2;
        sum = val1 + val2;
        cout << sum << endl; // yeo i have to leave for class  ima talk with the ta, cool i tried tha
      }
      catch (const out_of_range& oor)
      {
        if (num1_longer)
          sum = (int)num1[i] - 48;
        else
          sum = (int)num2[i] - 48;
      }
    }

    for (int i = 0; i <)

    int a=0,b,c,d;

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
            for(b=0; b<add; b++)
            {
              c=(num1[b]-'0')+(num2[b]-'0')+a;
              d=(c)%10;
              sum.append(to_string(d)); // sum is not defined
              a=(c-d)/10;
            }
          if(num1.length() > num2.length()|| num1.length() <= num2.length())
          {
            for(b; b<all; b++)
              {
                c=(numbers[b]-'0')+a;
                d=(c)%10;
                sum.append(to_string(d)); // sum is not defined
                a=(c-d)/10;
              }
          }
          if(a!=0) {sum.append(to_string(a));} // sum is not defined
          reverse(sum.begin(), sum.end()); // sum is not defined
    return result;
}
int main()
{
  string num1, num2;
  cout << "Add two large numbers in the following:" << endl;
  cout << "Input first large integer value: ";
  getline(cin, num1);
  cout << "Input second large integer value: ";
  getline(cin, num2);
  cout << "The sum of the large numbers is: " << findSum(num1,num2) << endl;
 return 0;
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////
