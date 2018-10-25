//Homework 1: Basic Calculator By: Konrad Brzoska

#include <iostream>
using namespace std;

int main()
{
  //define variales here in char or so type
  int a;
  int b;
  int c;
  int d;
  int r;

  //char 1 = +, 2 = -, 3 = *, 4 = /;

  cout << "Welcome to Basic Calculator 9000.\n";
  cout << "---------------------------------\n";
  cout << "Intergers only accepted as inputs. \n";

  cout << "Input first integer: \n";
  cin >> a;
  /*  if(a!= int;
    cout << "ERROR: Only input integers \n";
      )
    else(
    cin >> a;
  ) */

  cout << "Input desired opperation. (1 for +, 2 for -, 3 for *, 4 for /)\n";
   cin >> b;

/*   if((b!=1)||(b!=2)||(b!=3)||(b!=4))
    {
       cout << "ERROR: Choose 1 for +, 2 for -, 3 for *, 4 for / \n";

}
    else
      {
      cin >> b;
    }
*/
    cout << "Input second integer: \n";
    cin >> c;

    if((b==4)&&(c==0))
      {
        cout << "ERROR: You cannot divid by zero!";
      }

  /*  else(cout << "Input second integer: \n");
      {
      cin >> c;
    } */

    if(  b == 1)
    {
      d=(a+c);
      cout << "Answer: " << d << "\n";
    }

      else if(  b == 2)
      {
        d=(a-c);
        cout << "Answer: " << d << "\n";
      }

      else if(  b== 3)
      {
        d=(a*c);
        cout << "Answer: " << d << "\n";
      }

      else if( b == 4)
        {
        d=(a/c);
          r=(a%c);
       cout << "Answer: " << d << " with remainder: " << r << "\n";
      //  r=a%c;
      //  cout << "Remainder: " << r << "\n";
        }

  return 0;

}
