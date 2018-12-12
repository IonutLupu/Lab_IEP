#include <iostream>
#include <memory>
using namespace std;

class Complex {
    private:
        int x,y;
    public:
        Complex() { x =0; y = 0; }
        Complex(int i, int j) {x = i; y = j; } 
        Complex operator-(Complex op2); 
        void show();
        void f1();
        void f2();
        void f3();
};



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

void Complex::f1()
{
    Complex *c1 = new Complex();
    c1->x = 4;
    c1->y = 5;

    printf("f1 Complex: %i %i\n",c1->x,c1->y);
    delete c1;
}

void Complex::f2()
{
    auto_ptr<Complex> c1(new Complex());
    c1->x = 4;
    c1->y = 5;
    printf("f2 Complex: %i %i\n",c1->x,c1->y);
    auto_ptr<Complex> c2(c1);
    //cout<<c1<<endl;
    printf("f2 Complex: %i %i\n",c2->x,c2->y);
}

void Complex::f3()
{
    shared_ptr<Complex> c1(new Complex());
    shared_ptr<Complex> c2(c1);
    c1->x = 4;
    c1->y = 5;
    printf("f3 Complex: %i %i\n",c1->x,c1->y);
    c1->x = 7;
    c1->y = 90;
    //delete c1;
    cout<<c2.use_count()<<endl;
    c1 = nullptr;
    printf("f3 Complex: %i %i\n",c2->x,c2->y);
    cout<<c2.use_count()<<endl;
    c2 = nullptr;
    cout<<c2.use_count()<<endl;
}

int main()
{
    Complex c1 = Complex(4,5);
    c1.show();
    c1.f1();
    c1.f2();
    c1.f3();
    return 0;
}