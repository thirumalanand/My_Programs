#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    cout<<"Enter a String : ";
    string s;
    getline(cin,s);
    cout<<"Enter Char : ";
    char c;
    cin>>c;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i]==c) {cout<<"First Occ: "<<i+1; break;}
    }
    for(int i=(len-1); i>=0; i--)
    {
        if(s[i]==c) {cout<<"Last Occ: "<<i+1; break;}
    }
    return 0;

}