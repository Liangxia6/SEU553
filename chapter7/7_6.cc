/*定义一个哺乳动物Mammal类，再由此派生出狗Dog类，定义一个Dog类的对象，观察
基类与派生类的构造函数与析构函数的调用顺序。 */

#include <iostream>
using namespace std;

enum myColor
{
    BLACK,
    WHITE
};
class Mammal
{
public:
    // constructors
    Mammal();
    ~Mammal();
    // accessors
    int GetAge() const { return itsAge; }
    void SetAge(int age) { itsAge = age; }
    int GetWeight() const { return itsWeight; }
    void SetWeight(int weight) { itsWeight = weight; }
    // Other methods
    void Speak() const { cout << "Mammal sound!\n"; }

protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal
{
public:
    Dog();
    ~Dog();
    myColor GetColor() const { return itsColor; }
    void SetColor(myColor color) { itsColor = color; }
    void Speak() { cout << "Tail wagging...\n"; }

private:
    myColor itsColor;
};

Mammal::Mammal() : itsAge(1), itsWeight(5)
{
    cout << "Mammal constructor...\n";
}
Mammal::~Mammal()
{
    cout << "Mammal destructor...\n";
}
Dog::Dog() : itsColor(WHITE)
{
    cout << "Dog constructor...\n";
}
Dog::~Dog()
{
    cout << "Dog destructor...\n";
}
int main()
{
    Dog Jack;
    Jack.Speak();
    // Jack.WagTail();
    cout << " Jack is " << Jack.GetAge() << " years old\n";
    return 0;
}