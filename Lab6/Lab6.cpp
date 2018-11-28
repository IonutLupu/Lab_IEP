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
        Complex& operator=(const Complex& rhs);
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

Complex& Complex::operator=(const Complex& rhs)
{
    std::cout<<"Complex copy assignment operator";
    x = rhs.x;
    y = rhs.y;
    return *this; 
}

class StatisticComplex {
    private:
        Complex *c;
    public:
        StatisticComplex(Complex& co) { 
            cout<<"StatisticComplex constructor"<<endl;
            c = new Complex(co); }
        StatisticComplex& operator=(const StatisticComplex& rhs) 
        {
            cout<<"StatisticComplex copy assignment operator"<<endl;
            if (this == &rhs) return *this;
            delete c; 
            c = new Complex(*rhs.c);
            return *this;
        }
        
};

class PriorityStatisticComplex: StatisticComplex {
    private:
        int priority;
    public:
        PriorityStatisticComplex(const StatisticComplex& rhs, int pr)
        : StatisticComplex(rhs), 
        priority(pr)
        {
            std::cout<<"PriorityStatisticComplex copy constructor"<<endl;
        }
        PriorityStatisticComplex& operator=(const PriorityStatisticComplex& rhs) 
        {
            std::cout<<"PriorityStatisticComplex copy assignment operator"<<std::endl;
            StatisticComplex::operator=(rhs); // assign base class parts
            priority = rhs.priority;
            return *this;
        } 
};





// StatisticComplex& StatisticComplex::operator=(const StatisticComplex& rhs) 
// {
//     if (this == &rhs) return *this;
//     delete pb; 
//     pb = new Complex(*rhs.pb);
//     return *this;
// }

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
    StatisticComplex sc = StatisticComplex(c1);
    StatisticComplex sc1 = StatisticComplex(c2);
    sc1=sc;
    int priotit = 6;
    PriorityStatisticComplex(sc,priotit);
    return 0;
}