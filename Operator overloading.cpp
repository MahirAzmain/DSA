#include<bits/stdc++.h>
using namespace std;

class ComplexN
{

    int real, img;
public:

    ComplexN()
    {
        real = 0;
        img = 0;
    }

    ComplexN(int r, int i)
    {
        real = r;
        img = i;
    }

    void print()
    {
        cout<<real<< " + "<<img<<"i"<<endl;
    }
//
    ComplexN operator + (ComplexN c);
    ComplexN operator * (ComplexN c)
    {
        ComplexN temp;
        temp.real = real * c.real;
        temp.img = img * c.img;
        return temp;
    }
    // Overloading unary Minus (-) operator.
    ComplexN operator - ()
    {
        return ComplexN(-(this -> real), -(this -> img));
    }
// Overload ++ when used as prefix
    void operator ++ ()
    {
        ++real;
        ++img;
    }


    // Overload ++ when used as postfix
    void operator ++ (int)
    {
        real++;
        img++;
    }

};

  ComplexN ComplexN::operator + (ComplexN c)
    {
        ComplexN temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

int main()
{
    ComplexN c1(-2,4), c2(3, 7), c3(2,5), c4;
    c1.print();
    c2.print();
    c3.print();
    c4 = c1 + c2 * c3; //c1.add(c2);
    c4.print();
    // Invoking the overloaded unary minus (-) on c1 object and
    // storing the returned object in a new c2 Complex object.
       c4 = -c1;
       c4.print();
       c4++;
       c4.print();
       ++c4;
      c4.print();

    return 0;
}
