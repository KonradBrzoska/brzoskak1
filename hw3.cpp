// Homework 3, Bubble Shorting, By: Konrad Brzoska 10/17/18
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;
//head file
vector<int> readFile(string);
void bubble_sort(vector<int>&);
void swap(int&, int&);
void print_step(vector<int>);

int main()
{
  string fileName = "numbers.txt";
  vector<int> nums = readFile(fileName);
  // for(int i = 0; i < nums.size(); i++ )
  // {
  //   cout << nums[i] <<endl;
  // }
  bubble_sort(nums);
  return 0;
}

vector<int> readFile(string fileName)
{
  ifstream inFile;
  const char *file = fileName.c_str();
  int num;
  vector<int> nums;
  inFile.open(file);
  if (!inFile)
  {
    cout << "Unable to open file" << endl;
    exit(1); // Terminate with error
  }
  cout << "File [" + fileName + "] was opened and the following sequence was found: " << endl;
  while (inFile >> num)
  {
    cout << num << " ";
    nums.push_back(num);
  }
  cout << endl;
  inFile.close();
  return nums;
}

void bubble_sort(std::vector<int>& v)
{
  for(int i = 0; i < (v.size() - 1); i++)
  {
      // cout << v[i] << ", ";
    for(int j = 0; j < (v.size() - 1); j++)
    {
      if(v[j] > v[j+1])
      {
        swap( v[j], v[j+1]);
        for(int x=0; x<v.size(); x++)
        {
          cout << v[x] << " ";
        }
          cout<<endl;
      }
        // swap(v[i], v[j]);
        // print_step(v);
     }
  }
}

// Switches positions of two ints in a vector
void swap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
  //
  // if (a > b)
  // {
  //
  // }
}

// Print vector after swap
void print_step(vector<int> v)//
{

}
