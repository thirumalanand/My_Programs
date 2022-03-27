#include <iostream>
using namespace std;

void palin(string str)
{
   string rev= string(str.rbegin(), str.rend());
   cout<<"Reverse is :"<<rev<<endl;
   if(str==rev) cout<<"It is a palindrome";
   else cout<<"It is not a palindrome";
}

int main()
{
    string str;
    cout<<"Enter a String"<<endl;
    getline(cin,str);
    cout<<"Entered String :"<<str<<endl;
    palin(str);
    return 0;
}
