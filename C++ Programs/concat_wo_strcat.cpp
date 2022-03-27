#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str1,str2;
    
    cout<<"Enter String 1:"<<endl;
    getline(cin,str1);
    cout<<"Enter String 2:"<<endl;
    getline(cin,str2);
    cout<<str1+str2<<endl;
    return 0;

}