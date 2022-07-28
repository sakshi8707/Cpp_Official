#include<iostream>
using namespace std;
class complexNumber
{
    public:
      int real;
      int imag;
      void read() { cin >>real>> imag; }  
      void display()
      {
        cout << real << "+" << imag << "i" << endl;
      }
      void sum(complexNumber c1  ,complexNumber c2) 
      { 
          real = c1.real+c2.real;
        imag = c1.imag + c2.imag;
      }
};

int main()
{
  complexNumber c1, c2, c3;
  cout << "enter the real and imaginary part of complexnumber : " << endl;
  c1.read();
   cout << "enter the real and imaginary part of complexnumber : " << endl;
   c2.read();
   c3.sum(c1, c2);
   c3.display();

   return 0;
}