//Homework 4 done the right way hopefully by: Konrad Brzoska
/*
This is the unfortunate failed code
#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <time.h>

using namespace std;

 doesnt seem to work
vector<int> readFile(string);
void print_step(vector<int>);
void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("n");
}

int main()
{
  cout << "Enter the number of random elements you wish to sort through: " << endl;
  cout << "Put in 10 if you have trouble deciding" << endl;
  int random_element_number;
  cin >> random_element_number;

  ofstream outfile;
  outfile.open("RandomNumbers.txt");

  srand(time(NULL));

  while( int i = 0; i  < random_element_number; i++ )
  {
    outfile << rand() %random_element_number << " ";
  }
  outfile.close();

  ifstream inFile;
  inFile.open("RandomNumbers");
  float a;
  while (inFile >> a)
  {
    printf("%f ", a);
  }
  getchar();
  if(inFile.fail())
    cout << "Cannot read file" <<endl;
  inFile.close();
*/
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
  using namespace std;
  vector <int> my vector;
  ifstream outfile;
  int x;
  int y;
  int z;
  int t;

  a.open("RandomNumbers.txt");
  while(a>>x)
  {
    myvector.push_back(x);
  }
  a.close();
  sort(myvector.begin(), myvector.end());
  for(int i=0; i < myvector.size(); i++)
    cout << myvector[i] <<endl;
    //cout enter number of elements
  cin>> t;
  y = 0;
  z =myvector.size() - 1;
  int n = binarySearch(myvector, t, y, z);
  if(n<0)
    cout << "Cannot Find Number" << endl;
  if(n>0)
    cout << n << end1;
  return 0;
}
int binarySearch(std::vector<int> V, int & value, int & right, int & left)
{
  while (left <= right)
  {
    int middle = (left+right)/2;
    if (V[middle] == value)
      return middle;
    else if (V[middle] > value)
    right = middle-1;
    else left = middle+1;
    cout << "To the Left = " << left << endl;
    cout << "To the Middle = " << middle <<endl;
    cout << "To the Right = " << right << endl;
  }
  return -1
}
