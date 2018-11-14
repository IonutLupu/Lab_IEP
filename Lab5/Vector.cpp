#include <iostream>
#include <stdio.h>

using namespace std;

const int SIZE = 20;


class Vector {
    int array[SIZE];
    int a = 0xDEADBEEF;
    public:
        Vector() {
            register int i;
            for(i=0; i<SIZE; i++) array[i] = i;
        }
        int &operator[](int i)
        {
            if(i>=0 && i<SIZE)
            {
                return array[i];
            }
            else 
            {
                cout <<"Out of bounds!!!!"<<endl;
                return a;//(int&)0xDEADBEEF;
            }
        }            
};

int main()
{
    Vector v1 = Vector();
    for(int i=-2;i<SIZE+2;i++)
    {
        printf("0x%X\n",v1[i]);
    }
    return 0;
}