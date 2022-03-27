#include <iostream>
using namespace std;

class students
{
    public:
    char name[30];
    int srn, sub1, sub2;


    void getinfo()
    {
        cout<<"Enter Name: \n";
        cin.get(name,30);
        cout<<"Enter SRN, Marks 1 and Marks 2 : \n";
        cin>>srn>>sub1>>sub2;
    }

    double calc()
    {
        int avg;
        avg=(sub1+sub2)/2;
        return avg;
    }
    

    void disp(int avg)
    {
        cout<<"The name of the Sutdent is: "<<name<<" Srn is "<<srn<<" and his aggregate is "<<avg<<endl;
    }


};

int main()
{
    students s1;
    s1.getinfo();
    int i= s1.calc();
    s1.disp(i);
    return 0;
}