/*定义一个哺乳动物Mammal类，再由此派生出狗Dog类，二者都定义 Speak()成员函数，
基类中定义为虚函数，定义一个Dog类的对象，调用Speak函数，观察运行结果。*/

#include <iostream>
using namespace std;

class Mammal
{
public:
    Mammal() : itsAge(1) { cout << "Mammal constructor...\n"; }
    ~Mammal() { cout << "Mammal destructor...\n"; }
    virtual void Speak() const { cout << "Mammal speak!\n"; }

private:
    int itsAge;
};
class Dog : public Mammal
{
public:
    Dog() { cout << "Dog Constructor...\n"; }
    ~Dog() { cout << "Dog destructor...\n"; }
    void Speak() const { cout << "Woof!\n"; }
};
int main()
{
    Mammal *pDog = new Dog;
    pDog->Speak();
    return 0;
}