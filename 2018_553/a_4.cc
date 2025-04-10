#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal eats." << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat meows." << endl;
    }
};

int main()
{
    Animal a;
    Cat c;
    a.eat();
    c.eat();
    c.meow();
    return 0;
}