// 练习

#include <iostream>
using namespace std;

class FU
{
public:
    int a_ = 666;
    FU(int a) : a_(a)
    {
        a_ = 233;
        cout << "FU cons" << endl;
    }
    FU()
    {
        // a_ = 233;
        cout << "FU moren" << endl;
    }
    ~FU()
    {
        cout << "FU disc" << endl;
    }
    virtual void prin()
    {
        cout << "FU prin" << a_ << endl;
    }
};

class ZI : public FU
{
public:
    int b_;
    ZI(int a, int b) : FU(a), b_(b)
    {

        cout << "ZI  cons" << endl;
    }
    ~ZI()
    {
        cout << "ZI disc" << endl;
    }
    void prin()
    {
        cout << "ZI prin" << a_ << b_ << endl;
    }
};

int main(int argc, char const *argv[])
{
    FU f(4);
    ZI z(6, 7);
    // f.prin();
    // z.prin();
    FU *fu;
    fu = &z;
    fu->prin();
    return 0;
}
