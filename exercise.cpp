#include<iostream>
using namespace std;

class student
{
    private:
    int roll_no;
    string name;
    int physics;
    int chemistry;
    int maths;

    public:

    student(int r, string n, int p, int c, int m)
    {
    roll_no=r;
    name=n;
    physics=p;
    chemistry=c;
    maths=m;
    }

    int total()
    {
        return physics+chemistry+maths;
    }

    char grade()//use to 
    {
        if(total()>=250)
        return 'A';

        else if(250>total() && total()>100)
        return 'B';

        else
        return 'C' ;
    }

};

int main()
{
    int roll,mm,pm,cm;
    string name;
    cout<<"enter name here: "<<endl;
    cin>>name;
    cout<<"enter roll_no. here: "<<endl;
    cin>>roll;
    cout<<"enter maths marks here (out of 100): "<<endl;
    cin>>mm;
    cout<<"enter physics marks here (out of 100): "<<endl;
    cin>>pm;
    cout<<"enter chemistry marks here (out of 100): "<<endl;
    cin>>cm;

    student s(roll,name,mm,pm,cm);

    cout<<"total marks are "<<s.total()<<endl;
    cout<<"grade is "<<s.grade()<<endl;

}