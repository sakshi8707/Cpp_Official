#include<iostream>
using namespace std;
class Swap
{
    public:
      int a, b, temp;
      void getData() { cout << "enter the number :" << endl;
        cin >> a >> b;
      }
      void swapData()
       { 
           temp = a; a = b;
           b = temp;
       }
      void displayData()
      { 
      cout<<"a is = " << a << ", b is = " << b << endl;
      }

};

int main()
{
Swap s;
  s.getData();
  cout << "befor swaping : ";
  s.displayData();
  s.swapData();
  cout << "\n after swaping: ";
  s.displayData();

  return 0;
}