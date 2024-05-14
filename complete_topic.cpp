#include<iostream>
using namespace std;

class rectangle
{
    private:
    
        int length;
        int breadth; 
    
    public:

    rectangle();
    rectangle(int l, int b);
    rectangle( rectangle &r);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~rectangle();

};

int main()
{
    rectangle r1(10,2);
    cout<<r1.area()<<" "<<r1.perimeter()<<endl;
    if(r1.isSquare())
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}

rectangle::rectangle()
{
    length=1;
    breadth=1;
}

rectangle::rectangle(int l,int b)
{
    length=l;
    breadth=b;
}

rectangle::rectangle(rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}

void rectangle:: setLength(int l)//set is mutator//assigning value is mutator
    {
        if(l<=0)
        length=1;
        else
        length=l;
    }

    void rectangle:: setBreadth(int b)
    {
        if(b<=0)
        breadth=1;
        else
        breadth=b;
    }

    int rectangle::area(){
    return length*breadth;}

    int rectangle::perimeter(){
    return 2*(length+breadth);}

    bool rectangle::isSquare()
    {
        return length==breadth;
    }

    rectangle::~rectangle()
    {cout<<"rectangle destroyed";}