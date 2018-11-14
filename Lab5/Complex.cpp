#include <iostream>

using namespace std;

class Complex {
    private:
        int x,y;
    public:
        Complex() { x = y = 0; }
        Complex(int i, int j) {x = i; y = j; }
        Complex operator+(Complex op2); 
        Complex operator-(Complex op2); 
        void show();
};

Complex Complex::operator+(Complex op2)
{
    Complex temp;
    temp.x = x + op2.x; 
    temp.y = y + op2.y; 
    return temp;
}

Complex Complex::operator-(Complex op2)
{
    Complex temp;
    temp.x = x - op2.x; 
    temp.y = y - op2.y; 
    return temp;
}

void Complex::show() 
{
    cout << "Complex: z =" << x <<" + " << y<<"*i"<<endl;
}

int main()
{
    Complex c1 = Complex(4,5);
    c1.show();
    Complex c2 = Complex(3,8);
    c2.show();
    Complex c3 = c2 + c1;
    c3.show();
    Complex c4 = c2 - c1;
    c4.show();
    return 0;
}