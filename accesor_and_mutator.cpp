#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
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

int main (){
rectangle r1,r2,r3;

r1.setlength(4);
r1.setbreadth(2);

r2.setlength(3);
r2.setbreadth(6);

cout<<r1.area()<<" "<<r1.perimeter()<<endl;
cout<<r2.area()<<" "<<r2.perimeter()<<endl;
cout<<r3.area()<<" "<<r3.perimeter()<<endl;//just take garbage value because no value is assigned to r3
}