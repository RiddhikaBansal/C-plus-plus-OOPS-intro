#include <iostream>
using namespace std;

class test
{
    public:

    void fn1()
    {
        cout<<"inline"<<endl;
    }

    /*inline */void fn2();
};

int main()
{
    test t;
    t.fn1();
    t.fn2();
}

void test::fn2()
{
    cout<<"non-inline";
}