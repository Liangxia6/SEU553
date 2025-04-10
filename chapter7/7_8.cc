/*定义一个Document 类，有 name 成员变量，从Document 派生出Book 类，增加PageCount
变量。*/

#include <iostream>
#include <string>
using namespace std;

class Document
{
protected:
    string name;

public:
    Document(string n) : name(n) {}
    ~Document() {};
};

class Book : public Document
{
private:
    int PageCount;

public:
    Book(string n, int p) : Document(n), PageCount(p) {};
    int getPage() { return PageCount; }
    ~Book() {}
};

int main()
{
    Book *d = new Book("he", 400);
    cout << d->getPage();
}
