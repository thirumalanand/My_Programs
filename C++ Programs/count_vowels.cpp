#include <iostream>
using namespace std;

void count_vow(string str)
{
    int count = 0;
    for(int i=0; i<str.size(); i++) 
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        count++;
    }
    cout<<"Number of Vowels is :"<<count<<endl;
}

int main()
{
    string str;
    cout<<"Enter a String"<<endl;
    getline(cin,str);
    count_vow(str);
    return 0;
}
