#include<iostream>
using namespace std;
class Interest
{
    public:
      float p, r, y;
      float si;
      float amount;
      void read()
      {
        cout << "enter the priciple amount ,rate and year : " << endl;
        cin >> p >> r >> y;
        si = (p * r * y) / 100;
        amount = si + p;
      }
      void display() { cout << "\n ENTERED DETAILS \n" << endl;
        cout << "principle interest = " << p << endl;

        cout << "Rate = " << r << endl;
     
     cout<<" Year = "<<y<<endl;
     cout<<"Simple interest = "<<si<<endl;
     cout << "Amount = " << amount << endl;
     
      }
};

int main()
{
  Interest i;
  i.read();
  i.display();

  return 0;
}