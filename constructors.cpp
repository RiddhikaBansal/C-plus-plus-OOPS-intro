#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:

    rectangle()//non-paramaterised constructor
    {
        length=1;
        breadth=1;
    }

    /*rectangle(int l=1, int b=1)//if parameter already assign like this no need of non-paramaterised constructor
    {
        setlength(l);
        setbreadth(b);
    }*/

    rectangle(int l, int b)//paramaterised constructor
    {
        setlength(l);
        setbreadth(b);
    }

    rectangle(rectangle &r)//copy constructor
    {
        length=r.length;
        breadth=r.breadth;
    }

    void setlength(int l)//set is mutator//assigning value is mutator
    {
        if(l<=0)
        length=1;
        else
        length=l;
    }

    void setbreadth(int b)
    {
        if(b<=0)
        breadth=1;
        else
        breadth=b;
    }

    int getlength()//get is accessor//returning value is mutator
    {
        return length;
    }

    int getbreadth()
    {
        return breadth;
    }

    int area(){
    return length*breadth;}

    int perimeter(){
    return 2*(length+breadth);}
};

int main()
{
    rectangle r1,r2(4,5),r3(r2),r4=r2;//asignment operator
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r3.area()<<endl;
    cout<<r4.area()<<endl;
}