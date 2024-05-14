#include<iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;

    int area(){
    return length*breadth;}

    int perimeter(){
    return 2*(length+breadth);}
};

int main (){
rectangle r1,r2;

r1.length=4;
r1.breadth=2;

r2.length=3;
r2.breadth=6;

cout<<r1.area()<<" "<<r1.perimeter()<<endl;
cout<<r2.area()<<" "<<r2.perimeter()<<endl;
}