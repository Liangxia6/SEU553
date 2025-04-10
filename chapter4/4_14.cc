/*定义一个tree 类，有成员ages，成员函数grow(int years)对 ages 加上 years,age()
显示tree 对象的ages的值。 */

#include <iostream>
using namespace std;

class tree
{
public:
    tree(int agess) : ages(agess) {}

    void grow(int years)
    {
        this->ages += years;
    }
    void age()
    {
        cout << ages;
    }

private:
    int ages;
};

int main()
{
    tree t(10);
    t.age();
    t.grow(20);
    t.age();
}