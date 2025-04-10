// 读程序

#include <iostream>
#include <stdexcept>

using namespace std;

class ErrorA : public runtime_error
{
public:
    ErrorA() : runtime_error{"errorA"}
    {
    }
};

class ErrorB : public runtime_error
{
public:
    ErrorB() : runtime_error{"errorB"}
    {
    }
};

class ErrorC : public ErrorA
{
public:
    ErrorC()
    {
        runtime_error e{"errorC"};
        cout << e.what() << endl;
    }
};

int main()
{
    for (int i = 0; i < 4; i++)
    {
        try
        {
            switch (i)
            {
            case 0:
                throw runtime_error{"runtime_error"};
                break;
            case 1:
                throw ErrorA();
            case 2:
                throw ErrorB();
            case 3:
                throw ErrorC();
            }
        }
        catch (ErrorA &err)
        {
            cout << err.what() << endl;
        }
        catch (ErrorB &err)
        {
            cout << err.what() << endl;
        }
        catch (ErrorC &err)
        {
            cout << err.what() << endl;
        }
        catch (runtime_error &err)
        {
            cout << err.what() << endl;
        }
        cout << "===" << endl;
    }

    return 0;
}