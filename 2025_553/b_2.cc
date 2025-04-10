#include <iostream>
using namespace std;

template <typename T>
class Stack;

template <typename T>
class Node
{
    friend class Stack<T>;

public:
    T info;
    Node<T> *link;
    Node<T>(T info = 0, Node<T> *next = NULL)
    {
        this->info = info;
        link = next;
    }
};

template <typename T>
class Stack
{
public:
    Stack<T>()
    {
        top = NULL;
    }
    ~Stack<T>()
    {
        Node<T> *tmp = pop();
        while (tmp)
        {
            delete tmp;
            tmp = pop();
        }
    }
    void push(T t)
    {

        Node<T> *tmp = new Node<T>(t, top);
        top = tmp;
    }
    Node<T> *pop()
    {
        if (isEmpty())
        {
            return NULL;
        }
        Node<T> *tmp = top;
        top = top->link;
        return tmp;
    }
    bool isEmpty()
    {
        return top == NULL;
    }

    friend ostream &operator<<(ostream &out, const Stack<T> &s)
    {
        Node<T> *p = s.top;
        while (p)
        {
            out << "\t" << p->info;
            p = p->link;
        }
        out << endl;
        return out;
    }

private:
    Node<T> *top;
};

int main()
{
    Stack<int> s;
    if (s.isEmpty())
    {
        cout << "stack is empty" << endl; // 输出 "stack is empty"
    }
    s.push(2);
    s.push(3);
    int x = 5;
    s.push(x);
    cout << s; // 输出：5 3 2
}