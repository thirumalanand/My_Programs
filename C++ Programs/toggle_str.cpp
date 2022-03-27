#include <iostream>
using namespace std;

void toggle(char str[],int n)
{
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>'a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"After Toggle :"<<str<<endl;
}

void toggle1(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>'a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"After Toggle :"<<str<<endl;
}

int main()
{
    char str[10];
    //string str;
    cout<<"Enter a String"<<endl;
    cin.get(str,10);
    //getline(cin,str);
    cout<<"Before Toggle: "<<str<<endl;
    toggle(str,10);
    //toggle1(str);
    return 0;
}
