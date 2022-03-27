#include <iostream>
using namespace std;

void del_alpha(string str)
{
   cout<<"After Deleting Alphabets : ";
   for(int i=0; str[i]!='\0'; i++)
   {
       if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z') continue;
       cout<<str[i];
   }
}

int main()
{
    string str;
    cout<<"Enter a String"<<endl;
    getline(cin,str);
    cout<<"Entered String :"<<str<<endl;
    del_alpha(str);
    return 0;
}