// 读题
//考点:静态static

#include <iostream>
using namespace std;

class A
{
private:
    int n;

public:
    A(int a = 0)
    {
        n = a;
        cout << "A Constructor" << n << endl;
    }
    A(A& a)
    {
        n = a.n;
        cout << "A copy Constructor" << n << endl;
    }
    ~A(){
        cout << "A Destrucuor" << n << endl;
    }
};
void fun(A a){
    static A b(a);
}

int main(){
    A a(10);
    A a1(a);
    A a2(5);
    fun(a2);
    fun(a2);
    return 0;
}