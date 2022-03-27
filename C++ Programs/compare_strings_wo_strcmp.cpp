#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str1,str2;
    bool flag;
    cout<<"Enter String 1:"<<endl;
    getline(cin,str1);
    cout<<"Enter String 2:"<<endl;
    getline(cin,str2);
    for(int i=0; i<str1.length(); i++)
    {
        if(str1[i]==str2[i]) flag=true;
        else flag=false;
    }
    if(flag==true) cout<<"Both strings are same"<<endl;
    else cout<<"Not same"<<endl;
    return 0;

}