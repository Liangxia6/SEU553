/*设计一个字符串类MyString，具有构造函数、析构函数、拷贝构造函数，重载运算符
+、=、+=、[]，尽可能地完善它，使之能满足各种需要。*/

#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    char *str;

public:
    MyString() : str(new char[1]{'\0'}) {}
    MyString(const char *s)
    {
        if (s)
        {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
        else
        {
            new char[1]{'\0'};
        }
    }
    MyString(const MyString &other)
    {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    ~MyString()
    {
        delete[] str;
    }

    MyString operator+(const MyString &other) const
    {
        size_t len = strlen(str) + strlen(other.str) + 1;
        char *newStr = new char[len];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        return MyString(newStr);
    }

    MyString &operator=(const MyString &other)
    {
        if (this != &other)
        {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    char &operator[](size_t index)
    {
        if (index >= strlen(str))
        {
            throw std::out_of_range("Index out of range");
        }
        return str[index];
    }
    friend ostream &operator<<(ostream &os, const MyString &s);

    size_t length() const
    {
        return strlen(str);
    }

    void toString() const
    {
    }
};

ostream &operator<<(ostream &os, const MyString &s)
{
    os << s.str;
    return os;
}

int main(int argc, char const *argv[])
{
    MyString a = "asd";
    MyString b("fgh");
    cout << a[2] << endl;
    MyString c = a + b;
    cout << c << endl;
    return 0;
}
