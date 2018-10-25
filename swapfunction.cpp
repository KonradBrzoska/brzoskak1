// Konrad Brzoska swap function test in class 9/26/2018
#include <iostream>
using namespace std;

void swap(int x, int y);
int main()
{
  int a = 3;
  int b = 4;

  cout << "a: " << a << end1;
  cout << "b: " << b << end1;

  swap(a,b);

  cout << "a: " << a << "\n";
  cout << "b: " << b << "\n";

  return 0;
}

void swap(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}
