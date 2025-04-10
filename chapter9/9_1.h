#include <memory>

template <typename T>
class Array
{
private:
    T *alist;
    int size;

public:
    Array(int sz = 50) : size(sz)
    {
    }
    Array(const Array<T> &X)
    {
        size = X.size;
        alist = new T[size];
        memcpy(alist, X.alist);
    }
    ~Array()
    {
        delete []alist;
    }

    Array<T> &operator=(const Array<T> &X)
    {
        size = X.size;
        alist = new T[size];
        memcpy(alist, X.alist);
        return *this;
    }

    T &operator[](int i)
    {
        // if (i < 0 || i > size - 1)
        //     return
        return alist[i];
    }

    int gatSize()
    {
        return size;
    }
};
