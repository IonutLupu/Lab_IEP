#include <iostream>

using namespace std;

class Animal {
    protected:
        int max_age;
        int weight;
    public:
        Animal(int ma, int w) {max_age = ma; weight = w; }
        //Animal() {max_age = 0; weight = 0; }
        int getMaxAge()
        {
            return max_age;
        }
        int getWeights()
        {
            return weight;
        }
        virtual void sound()=0;
};


class Dog : public Animal {

    public:
        Dog(int ma, int w) : Animal(ma,w)
        {

        }
        void sound() 
        {
            printf("Ham Ham\n");
        }

        void fetch()
        {
            printf("Get the stick!\n");
        }
};

class Cat : public Animal {

    public:
        Cat(int ma, int w) : Animal(ma,w)
        {

        }
        void sound() 
        {
            printf("Miau miau\n");
        }

        void purrs()
        {
            printf("Purrrrrrrr\n");
        }
};

class Horse : public Animal {

    public:
        Horse(int ma, int w) : Animal(ma,w)
        {

        }
        void sound() 
        {
            printf("Nihaha\n");
        }
        void ride() 
        {
            printf("ride the horse\n");
        }
};

class Cow : public Animal {

    public:
        Cow(int ma, int w) : Animal(ma,w)
        {

        }
        void sound() 
        {
            printf("Muuu\n");
        }
        void milk() 
        {
            printf("Milk the cow\n");
        }
};


int main()
{
   // Animal *a = new Animal[4];
   Animal *b = new Dog(2,5);
    //a[0] = new Cat(15,5);
    //a[1] = new Dog(20,20);
    //a[2] = new Horse(30,400);
    //a[3] = new Cow(20,300);
    return 0;
}