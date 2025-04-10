#include <iostream>
#include <exception>
#include <string>
using namespace std;

class Myexc : public exception
{
private:
    string msg;

public:
    Myexc(string s) : msg(s) {}
    const char *what() const noexcept override
    {
        return msg.c_str();
    }
};

int main(int argc, char const *argv[])
{
    try
    {
        throw Myexc("I dont konw");
    }
    catch (Myexc &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}
