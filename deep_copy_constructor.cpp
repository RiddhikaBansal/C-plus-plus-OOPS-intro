#include<iostream>
using namespace std;

class test
{
    int a;
    int *p;

public:
test(int x)
{
    a=x;
    p=new int [a];
}

test(test &t)
{
    a=t.a;
    //p=t.p;//this is pointing to the array of above constructor// shallow copy constructor//copy only the members of an object. 
    p=new int [a];//deep copy constructor//deep copy constructor is useful for making a copy of dynamic structures which are in heap. like Dynamic Array ,Linked List, Trees etc. 
}

int marks(){
    return a++;
}
};

int main()
{
    test t(5);
    test t2(t);
    cout<<t.marks()<<" "<<t2.marks();
}